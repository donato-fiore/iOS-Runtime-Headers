// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplate.h"
#import "CLKGaugeProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerGaugeViewBridge : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (retain, nonatomic) NSData *labelData; // ivar: _labelData
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider; // ivar: _trailingTextProvider


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(NSInteger)compatibleFamily;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif