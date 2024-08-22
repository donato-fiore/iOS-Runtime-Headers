// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMODULARSMALLBATTERYTEMPLATEVIEW_H
#define NTKMODULARSMALLBATTERYTEMPLATEVIEW_H



#import "NTKModularSmallRingTemplateView.h"

@interface NTKModularSmallBatteryTemplateView : NTKModularSmallRingTemplateView



+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)forcedRingColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredRingColor;
-(void)_refreshRingImage;
-(void)_update;
-(void)applyColorScheme:(id)arg0 ;


@end


#endif