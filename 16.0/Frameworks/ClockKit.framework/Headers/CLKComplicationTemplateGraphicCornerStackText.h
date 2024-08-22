// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERSTACKTEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERSTACKTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *innerTextProvider; // ivar: _innerTextProvider
@property (copy, nonatomic) CLKTextProvider *outerTextProvider; // ivar: _outerTextProvider


+(id)templateWithInnerTextProvider:(id)arg0 outerTextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithInnerTextProvider:(id)arg0 outerTextProvider:(id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif