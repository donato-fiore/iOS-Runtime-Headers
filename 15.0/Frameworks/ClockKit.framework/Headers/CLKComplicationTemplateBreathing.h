// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEBREATHING_H
#define CLKCOMPLICATIONTEMPLATEBREATHING_H



#import "CLKComplicationTemplate.h"

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {
    NSInteger _family;
}


@property (nonatomic) NSInteger sessionCount; // ivar: _sessionCount


+(id)breathingTemplateWithFamily:(NSInteger)arg0 ;
-(NSInteger)compatibleFamily;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;


@end


#endif