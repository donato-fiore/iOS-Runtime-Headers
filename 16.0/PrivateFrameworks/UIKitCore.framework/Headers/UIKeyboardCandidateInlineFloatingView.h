// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDCANDIDATEINLINEFLOATINGVIEW_H
#define UIKEYBOARDCANDIDATEINLINEFLOATINGVIEW_H

@class NSString;


#import "UIView.h"

@interface UIKeyboardCandidateInlineFloatingView : UIView

@property (nonatomic) int adjustMode; // ivar: _adjustMode
@property (nonatomic) UIEdgeInsets cellPadding; // ivar: _cellPadding
@property (nonatomic) CGFloat extendedStateAdditionalHeight; // ivar: _extendedStateAdditionalHeight
@property (nonatomic) UIEdgeInsets extraInsets; // ivar: _extraInsets
@property (nonatomic) CGRect inlineRect; // ivar: _inlineRect
@property (nonatomic) BOOL inlineRectIsVertical; // ivar: _inlineRectIsVertical
@property (copy, nonatomic) NSString *inlineText; // ivar: _inlineText
@property (nonatomic) CGFloat maxX; // ivar: _maxX
@property (nonatomic) int position; // ivar: _position
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (nonatomic) CGRect previousCollapsedFrame; // ivar: _previousCollapsedFrame
@property (readonly, nonatomic, getter=isReducedWidth) BOOL reducedWidth; // ivar: _reducedWidth


-(BOOL)isAcceptableFrame:(struct CGRect )arg0 afterScrollBy:(CGFloat)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldExtendUpwards;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)traitCollection;
-(struct CGRect )adjustedFrameFromDesiredFrame:(struct CGRect )arg0 textHeight:(CGFloat)arg1 ;
-(struct CGRect )adjustedFrameFromDesiredFrame:(struct CGRect )arg0 textWidth:(CGFloat)arg1 ;
-(struct CGRect )adjustedInlineRectFromInlineText:(id)arg0 inlineRect:(struct CGRect )arg1 ;
-(void)adjustFrameForInlineText:(id)arg0 inlineRect:(struct CGRect )arg1 maxX:(CGFloat)arg2 ;
-(void)layoutSubviews;


@end


#endif