// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIFACEIDCOACHINGVIEW_H
#define SBUIFACEIDCOACHINGVIEW_H

@class UIView, NSString, UIMorphingLabel, _UILegibilitySettings;



@interface SBUIFaceIDCoachingView : UIView

@property (nonatomic) NSUInteger coachingCondition; // ivar: _coachingCondition
@property (retain, nonatomic) NSString *currentSizeCategory; // ivar: _currentSizeCategory
@property (retain, nonatomic, getter=_label) UIMorphingLabel *label; // ivar: _label
@property (retain, nonatomic) NSString *labelText; // ivar: _labelText
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) CGFloat stringWidth;


-(id)init;
-(void)_contentSizeCategoryChanged;
-(void)_resizeLabelToFirstSizeCategoryThatFits;
-(void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif