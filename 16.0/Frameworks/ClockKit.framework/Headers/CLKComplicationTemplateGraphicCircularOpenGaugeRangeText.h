// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGERANGETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGERANGETEXT_H



#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // ivar: _centerTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider; // ivar: _trailingTextProvider


+(id)templateWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 centerTextProvider:(id)arg3 ;
-(id)initWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 centerTextProvider:(id)arg3 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif