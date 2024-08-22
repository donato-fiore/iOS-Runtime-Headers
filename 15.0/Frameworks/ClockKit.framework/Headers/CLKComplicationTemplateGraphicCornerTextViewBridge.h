// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERTEXTVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERTEXTVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerTextViewBridge : CLKComplicationTemplate

@property (retain, nonatomic) NSData *labelData; // ivar: _labelData
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(NSInteger)compatibleFamily;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif