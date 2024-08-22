// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKBASECOMPOSECONTROLLER_H
#define GKBASECOMPOSECONTROLLER_H

@class UIScrollView, NSArray, NSLayoutConstraint, UIView, NSString;
@protocol UITextViewDelegate;


#import "GKLoadableContentViewController.h"
#import "GKContiguousContainerView.h"
#import "GKTextView.h"

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate>



@property (retain, nonatomic) UIScrollView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSArray *composeHeaderFields; // ivar: _composeHeaderFields
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint; // ivar: _contentHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // ivar: _contentLeadingConstraint
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GKContiguousContainerView *headerFieldContainer; // ivar: _headerFieldContainer
@property (nonatomic) UIView *intendedFirstResponder; // ivar: _intendedFirstResponder
@property (nonatomic) CGRect lastKnownKeyboardFrame; // ivar: _lastKnownKeyboardFrame
@property (retain, nonatomic) GKTextView *messageField; // ivar: _messageField
@property (retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint; // ivar: _messageFieldTrailingConstraint
@property (nonatomic) CGFloat scrollContentInsetAdjustY; // ivar: _scrollContentInsetAdjustY
@property (nonatomic) BOOL showHeaderFieldContainer; // ivar: _showHeaderFieldContainer
@property (readonly) Class superclass;


-(BOOL)_gkWantsCustomRightBarButtonItemInViewService;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)viewMetricsForContainerView:(id)arg0 ;
-(struct UIEdgeInsets )margins;
-(void)_adjustContentInsetForShowingKeyboard:(BOOL)arg0 ;
-(void)_scrollSelectedTextToVisible;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)keyboardWillHideShow:(id)arg0 ;
-(void)loadView;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif