// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARCLOSEDGAUGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARCLOSEDGAUGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (retain, nonatomic) NSData *labelData; // ivar: _labelData


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;


@end


#endif