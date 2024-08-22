// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRECHARACTERISTICACTIONVARIANCERULE_H
#define HRECHARACTERISTICACTIONVARIANCERULE_H

@class NSString;


#import "HREActionVariance.h"

@interface HRECharacteristicActionVarianceRule : HREActionVariance

@property (readonly, nonatomic) NSString *characteristicType; // ivar: _characteristicType


+(id)anyVarianceRuleForCharacteristicType:(id)arg0 ;
+(id)varianceKeyForCharacteristicType:(id)arg0 ;
-(BOOL)passesForAction:(id)arg0 ;
-(id)_initWithType:(id)arg0 ;


@end


#endif