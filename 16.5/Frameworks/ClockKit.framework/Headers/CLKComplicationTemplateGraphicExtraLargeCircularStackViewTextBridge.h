// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARSTACKVIEWTEXTBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARSTACKVIEWTEXTBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularStackViewTextBridge : CLKComplicationTemplateGraphicExtraLargeCircular

@property (retain, nonatomic) NSData *contentData; // ivar: _contentData
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif