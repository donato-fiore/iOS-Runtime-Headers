// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONPOPOVERCONTROLLER_H
#define UIDICTATIONPOPOVERCONTROLLER_H

@class UIResponder<UITextInput>, NSMutableArray, NSLayoutConstraint, NSString;
@protocol _UIScrollViewScrollObserver, _UIGeometryChangeObserver;


#import "UIKeyboardPopoverController.h"
#import "UIView.h"
#import "UILabel.h"
#import "UITextView.h"

@interface UIDictationPopoverController : UIKeyboardPopoverController <_UIScrollViewScrollObserver, _UIGeometryChangeObserver>

 {
    UIResponder<UITextInput> *_inputDelegate;
    NSMutableArray *_scrollViews;
    CGRect _initCaretRectInView;
    CGRect _sourceRect;
    CGRect _editMenuFrame;
    CGRect _clipBounds;
    UIView *_inputAccessoryView;
    UIView *_dictationView;
    NSLayoutConstraint *_dictationViewTopConstraint;
    NSLayoutConstraint *_dictationViewBottomConstraint;
    UILabel *_title;
    UITextView *_textView;
    UIView *_bottomEdgeView;
    BOOL _isVerticalText;
    BOOL _needsRestoreArrowDirction;
    CGRect _popoverFrame;
    CGFloat _bottomMargin;
    NSUInteger _arrowDirection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPresentTip;
-(NSInteger)overrideUserInterfaceStyle;
-(id)initWithContentView:(id)arg0 contentSize:(struct CGSize )arg1 inputDelegate:(id)arg2 ;
-(struct CGRect )clipBounds;
-(struct CGRect )rectInWindow:(struct CGRect )arg0 ;
-(struct CGRect )sourceRect;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)dealloc;
-(void)dismissTip;
-(void)forwardRemoteDictationPopover:(BOOL)arg0 ;
-(void)keyboardDidChange:(id)arg0 ;
-(void)movePopoverView:(struct CGRect )arg0 ;
-(void)movePopoverView:(struct CGRect )arg0 editMenuFrame:(id)arg1 ;
-(void)movePopoverViewForEditMenuFrame:(struct CGRect )arg0 ;
-(void)movePopoverViewToCurrentCareLocation;
-(void)presentTip:(id)arg0 tipDescription:(id)arg1 ;
-(void)setRemoteDictationPopover:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif