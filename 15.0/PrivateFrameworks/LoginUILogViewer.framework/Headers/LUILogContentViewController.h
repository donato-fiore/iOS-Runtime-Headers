// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LUILOGCONTENTVIEWCONTROLLER_H
#define LUILOGCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, UIPanGestureRecognizer, NSArray, UILabel, UIActivityIndicatorView, UITextView, UIView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, LUILogContentViewControllerDelegate;


#import "LUILogLocatorView.h"
#import "LUILogOptionsView.h"

@interface LUILogContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LUILogContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LUILogLocatorView *logLocatorView; // ivar: _logLocatorView
@property (retain, nonatomic) LUILogOptionsView *logOptionsView; // ivar: _logOptionsView
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (retain, nonatomic) NSArray *screenshotItems; // ivar: _screenshotItems
@property (retain, nonatomic) UILabel *scrollIndicatorView; // ivar: _scrollIndicatorView
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView
@property (retain, nonatomic) UIView *textViewHolderView; // ivar: _textViewHolderView


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_createLogLocatorView;
-(id)_createLogOptionsView;
-(id)_createLogTextView;
-(id)_dateWithPercentage:(CGFloat)arg0 ;
-(id)_generateScreenshotItem;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(struct _NSRange )_visibleRangeOfTextView:(id)arg0 ;
-(void)_applyScreenShotAnimation;
-(void)_setupButtonActions;
-(void)_setupTextViewGesture;
-(void)clearScreenshots;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)downArrowButtonTapped:(id)arg0 ;
-(void)enableTimeConsumingOptions:(BOOL)arg0 ;
-(void)handlePan:(id)arg0 ;
-(void)loadView;
-(void)logOptionButtonTapped:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)screenshotButtonTapped:(id)arg0 ;
-(void)showLogOptionsView;
-(void)showLogTextView;
-(void)showSpinner:(BOOL)arg0 ;
-(void)upArrowButtonTapped:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif