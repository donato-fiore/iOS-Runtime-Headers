// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARTEXTGAUGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARTEXTGAUGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicRectangularTextGaugeViewBridge : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *bodyTextProvider; // ivar: _bodyTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (retain, nonatomic) NSData *headerLabelData; // ivar: _headerLabelData
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider


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