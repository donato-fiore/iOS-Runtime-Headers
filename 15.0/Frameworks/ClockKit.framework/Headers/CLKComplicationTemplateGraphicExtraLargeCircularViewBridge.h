// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular

@property (retain, nonatomic) NSData *contentData; // ivar: _contentData


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;


@end


#endif