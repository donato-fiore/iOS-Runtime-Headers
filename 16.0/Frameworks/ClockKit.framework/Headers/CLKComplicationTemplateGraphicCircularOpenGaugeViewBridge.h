// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicCircularOpenGaugeViewBridge : CLKComplicationTemplateGraphicCircular

@property (retain, nonatomic) NSData *bottomLabelData; // ivar: _bottomLabelData
@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // ivar: _centerTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif