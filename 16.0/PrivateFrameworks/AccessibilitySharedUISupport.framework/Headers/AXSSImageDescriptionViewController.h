// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSIMAGEDESCRIPTIONVIEWCONTROLLER_H
#define AXSSIMAGEDESCRIPTIONVIEWCONTROLLER_H

@class UIViewController, UIColor, UIView, NSString, UINavigationBar, NSLayoutConstraint, UIScrollView;
@protocol AXSSImagePreviewViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationBarDelegate, UITextViewDelegate, AXSSImageDescriptionViewControllerDelegate;


#import "AXSSImagePreviewViewController.h"
#import "AXSSScrollViewEnclosedTextView.h"

@interface AXSSImageDescriptionViewController : UIViewController <AXSSImagePreviewViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationBarDelegate, UITextViewDelegate>



@property (retain, nonatomic) UIColor *contentBackgroundColor; // ivar: _contentBackgroundColor
@property (retain, nonatomic) UIView *contentBackgroundView; // ivar: _contentBackgroundView
@property (retain, nonatomic) UIView *contentSnapshot; // ivar: _contentSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSSImageDescriptionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageDescription; // ivar: _imageDescription
@property (retain, nonatomic) AXSSImagePreviewViewController *imagePreviewController; // ivar: _imagePreviewController
@property BOOL isSavingOrCancelling; // ivar: _isSavingOrCancelling
@property BOOL isUIReady; // ivar: _isUIReady
@property (retain, nonatomic) UINavigationBar *navBar; // ivar: _navBar
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textBackgroundView; // ivar: _textBackgroundView
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewBottomConstraint; // ivar: _textBackgroundViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewFixedTopConstraint; // ivar: _textBackgroundViewFixedTopConstraint
@property (retain, nonatomic) UIScrollView *textScrollView; // ivar: _textScrollView
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewBottomConstraint; // ivar: _textScrollViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewExpandingHeightConstraint; // ivar: _textScrollViewExpandingHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewFixedHeightConstraint; // ivar: _textScrollViewFixedHeightConstraint
@property (retain, nonatomic) AXSSScrollViewEnclosedTextView *textView; // ivar: _textView


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasChanges;
-(BOOL)_hasFormView;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)_modifiedImageDescription;
-(id)initWithContentSnapshot:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_adjustViewToKeyboardFrame:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_hideKeyboard;
-(void)_layoutContentBackground;
-(void)_layoutImagePreview;
-(void)_scrollTextViewCaretToVisibleRegion;
-(void)_updateTextScrollViewConstraints;
-(void)cancelChanges:(id)arg0 ;
-(void)imagePreviewShouldExpand:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)saveChanges:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif