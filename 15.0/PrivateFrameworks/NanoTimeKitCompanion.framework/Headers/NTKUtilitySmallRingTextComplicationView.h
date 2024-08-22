// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUTILITYSMALLRINGTEXTCOMPLICATIONVIEW_H
#define NTKUTILITYSMALLRINGTEXTCOMPLICATIONVIEW_H



#import "NTKUtilitySmallRingComplicationView.h"
#import "NTKColoringLabel.h"

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView

@property (readonly, nonatomic) NTKColoringLabel *label; // ivar: _label


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)layoutSubviews;


@end


#endif