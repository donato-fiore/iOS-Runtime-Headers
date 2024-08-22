// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAUTOCORRECTBUBBLECONTAINER_H
#define UIAUTOCORRECTBUBBLECONTAINER_H

@class NSLayoutConstraint, NSString;


#import "UIView.h"
#import "UIAutocorrectBubble.h"

@interface UIAutocorrectBubbleContainer : UIView

@property (retain, nonatomic) UIAutocorrectBubble *bubble; // ivar: _bubble
@property (retain, nonatomic) NSLayoutConstraint *bubbleTopConstraint; // ivar: _bubbleTopConstraint
@property (retain, nonatomic) UIView *fakeTextSelectionHighlight; // ivar: _fakeTextSelectionHighlight
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) NSLayoutConstraint *highlightWidthConstraint; // ivar: _highlightWidthConstraint
@property (nonatomic) CGRect referenceRect; // ivar: _referenceRect
@property (retain, nonatomic) NSString *typedText; // ivar: _typedText
@property (retain, nonatomic) UIView *typedTextAnimationPlaceholder; // ivar: _typedTextAnimationPlaceholder
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint
@property (retain, nonatomic) NSLayoutConstraint *xConstraint; // ivar: _xConstraint
@property (retain, nonatomic) NSLayoutConstraint *yConstraint; // ivar: _yConstraint


-(BOOL)isViewAnimating;
-(id)createTypedTextViewWithTypedText:(id)arg0 ;
-(id)init;
-(void)animateAutocorrectionAccepted;
-(void)didTapAutocorrectionBubble;
-(void)dismissAutocorrectBubble;
-(void)performReset;
-(void)reset;
-(void)updateBubbleWithAutocorrectionText:(id)arg0 referenceRect:(struct CGRect )arg1 ;
-(void)updateFakeTextSelectionHighlightForRect:(struct CGRect )arg0 ;
-(void)updateSelfWithRect:(struct CGRect )arg0 ;
-(void)updateWithAutocorrectionText:(id)arg0 typedText:(id)arg1 referenceTextView:(id)arg2 referenceRect:(struct CGRect )arg3 ;


@end


#endif