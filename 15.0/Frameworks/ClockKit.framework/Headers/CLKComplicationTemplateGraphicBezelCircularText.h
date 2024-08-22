// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICBEZELCIRCULARTEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICBEZELCIRCULARTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate

@property (copy, nonatomic) CLKComplicationTemplateGraphicCircular *circularTemplate; // ivar: _circularTemplate
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithCircularTemplate:(id)arg0 ;
+(id)templateWithCircularTemplate:(id)arg0 textProvider:(id)arg1 ;
-(BOOL)needsSerializableCopy;
-(NSInteger)compatibleFamily;
-(id)_validEmbeddedTemplateClassNamesForKey:(id)arg0 ;
-(id)initWithCircularTemplate:(id)arg0 ;
-(id)initWithCircularTemplate:(id)arg0 textProvider:(id)arg1 ;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif