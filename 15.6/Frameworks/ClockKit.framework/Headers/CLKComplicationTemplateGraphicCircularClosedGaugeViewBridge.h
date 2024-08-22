// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicCircularClosedGaugeViewBridge : CLKComplicationTemplateGraphicCircular

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