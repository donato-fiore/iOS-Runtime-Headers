// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEBATTERY_H
#define CLKCOMPLICATIONTEMPLATEBATTERY_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate {
    NSInteger _family;
}


@property (nonatomic) BOOL charging; // ivar: _charging
@property (nonatomic) CGFloat level; // ivar: _level
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithFamily:(NSInteger)arg0 textProvider:(id)arg1 level:(CGFloat)arg2 charging:(BOOL)arg3 ;
-(NSInteger)compatibleFamily;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 textProvider:(id)arg1 level:(CGFloat)arg2 charging:(BOOL)arg3 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateFloatKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif