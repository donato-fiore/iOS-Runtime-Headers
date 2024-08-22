// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARSMALLSIMPLETEXT_H
#define CLKCOMPLICATIONTEMPLATEMODULARSMALLSIMPLETEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateModularSmallSimpleText : CLKComplicationTemplate

@property (nonatomic) NSInteger maxDynamicFontSize; // ivar: _maxDynamicFontSize
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithTextProvider:(id)arg0 ;
-(NSInteger)compatibleFamily;
-(id)init;
-(id)initWithTextProvider:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif