// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLEGIBILITYLABELACCESSORYVIEW_H
#define SBICONLEGIBILITYLABELACCESSORYVIEW_H

@class UIImageView;


#import "SBIconLabelAccessoryView.h"

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView

@property (readonly, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView


-(BOOL)hasBaseline;
-(CGFloat)baselineOffsetFromBottom;
-(id)firstBaselineAnchor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastBaselineAnchor;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)updateWithBaseImage:(id)arg0 legibilitySettings:(id)arg1 ;
-(void)updateWithLegibilitySettings:(id)arg0 labelFont:(id)arg1 ;


@end


#endif