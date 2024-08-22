// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARTEXTMETEREDGAUGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARTEXTMETEREDGAUGE_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicRectangularTextMeteredGauge : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *body1TextProvider; // ivar: _body1TextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3 ;
+(id)templateWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 gaugeProvider:(id)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3 ;
-(id)initWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 gaugeProvider:(id)arg2 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif