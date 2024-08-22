// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARLARGEVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARLARGEVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge : CLKComplicationTemplate

@property (retain, nonatomic) NSData *contentData; // ivar: _contentData
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider


-(BOOL)needsSerializableCopy;
-(BOOL)usesSwiftUI;
-(NSInteger)compatibleFamily;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif