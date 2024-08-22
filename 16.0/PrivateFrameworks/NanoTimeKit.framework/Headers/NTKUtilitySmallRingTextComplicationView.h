// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUTILITYSMALLRINGTEXTCOMPLICATIONVIEW_H
#define NTKUTILITYSMALLRINGTEXTCOMPLICATIONVIEW_H

@class CLKUIColoringLabel;


#import "NTKUtilitySmallRingComplicationView.h"

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView

@property (readonly, nonatomic) CLKUIColoringLabel *label; // ivar: _label


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)layoutSubviews;


@end


#endif