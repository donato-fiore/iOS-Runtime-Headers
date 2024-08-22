// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplateGraphicCircular.h"

@interface CLKComplicationTemplateGraphicCircularViewBridge : CLKComplicationTemplateGraphicCircular

@property (retain, nonatomic) NSData *contentData; // ivar: _contentData


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;


@end


#endif