// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARSTACKVIEWTEXTBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARSTACKVIEWTEXTBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCircularStackViewTextBridge : CLKComplicationTemplateGraphicCircular

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