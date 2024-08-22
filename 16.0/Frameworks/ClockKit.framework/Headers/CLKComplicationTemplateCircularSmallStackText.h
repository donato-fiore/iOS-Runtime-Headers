// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATECIRCULARSMALLSTACKTEXT_H
#define CLKCOMPLICATIONTEMPLATECIRCULARSMALLSTACKTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *line1TextProvider; // ivar: _line1TextProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif