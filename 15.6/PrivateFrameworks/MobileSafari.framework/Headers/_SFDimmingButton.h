// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFDIMMINGBUTTON_H
#define _SFDIMMINGBUTTON_H

@class UIColor, NSNumber, NSValue;


#import "SFClickableButton.h"

@interface _SFDimmingButton : SFClickableButton {
    UIColor *_cachedDimmedBackgroundColor;
}


@property (nonatomic) BOOL alwaysUsesUIMenuOrdering; // ivar: _alwaysUsesUIMenuOrdering
@property (retain, nonatomic) UIColor *dimmableBackgroundColor; // ivar: _dimmableBackgroundColor
@property (nonatomic) CGFloat highlightAnimationDuration; // ivar: _highlightAnimationDuration
@property (nonatomic) CGFloat highlightedImageAlpha; // ivar: _highlightedImageAlpha
@property (nonatomic) CGFloat normalImageAlpha; // ivar: _normalImageAlpha
@property (retain, nonatomic) NSNumber *tapTargetSideMargin;
@property (retain, nonatomic) NSValue *tapTargetSideMargins; // ivar: _tapTargetSideMargins


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)_updateImageAlpha;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif