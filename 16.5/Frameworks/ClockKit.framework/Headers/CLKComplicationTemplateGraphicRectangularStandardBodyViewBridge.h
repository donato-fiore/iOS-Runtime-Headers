// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARSTANDARDBODYVIEWBRIDGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARSTANDARDBODYVIEWBRIDGE_H

@class NSData;


#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicRectangularStandardBodyViewBridge : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *body1TextProvider; // ivar: _body1TextProvider
@property (copy, nonatomic) CLKTextProvider *body2TextProvider; // ivar: _body2TextProvider
@property (retain, nonatomic) NSData *headerLabelData; // ivar: _headerLabelData
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