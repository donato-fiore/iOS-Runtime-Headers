// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGETEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKGaugeProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerGaugeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider
@property (copy, nonatomic) CLKTextProvider *outerTextProvider; // ivar: _outerTextProvider
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider; // ivar: _trailingTextProvider


+(id)templateWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 outerTextProvider:(id)arg3 ;
+(id)templateWithGaugeProvider:(id)arg0 outerTextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 outerTextProvider:(id)arg3 ;
-(id)initWithGaugeProvider:(id)arg0 outerTextProvider:(id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif