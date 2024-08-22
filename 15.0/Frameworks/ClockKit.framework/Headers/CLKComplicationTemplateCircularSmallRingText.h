// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATECIRCULARSMALLRINGTEXT_H
#define CLKCOMPLICATIONTEMPLATECIRCULARSMALLRINGTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateCircularSmallRingText : CLKComplicationTemplate

@property (nonatomic) float fillFraction; // ivar: _fillFraction
@property (nonatomic) NSInteger ringStyle; // ivar: _ringStyle
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithTextProvider:(id)arg0 fillFraction:(float)arg1 ringStyle:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithTextProvider:(id)arg0 fillFraction:(float)arg1 ringStyle:(NSInteger)arg2 ;
-(void)_enumerateFloatKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif