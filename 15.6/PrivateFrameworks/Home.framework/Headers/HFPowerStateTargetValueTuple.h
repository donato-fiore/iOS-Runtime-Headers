// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFPOWERSTATETARGETVALUETUPLE_H
#define HFPOWERSTATETARGETVALUETUPLE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface HFPowerStateTargetValueTuple : NSObject

@property (readonly, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, nonatomic) NSNumber *offTargetValue; // ivar: _offTargetValue
@property (readonly, nonatomic) NSNumber *onTargetValue; // ivar: _onTargetValue


+(id)fanStateTargetValueTuple;
-(NSInteger)primaryStateForTargetValue:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristicType:(id)arg0 onTargetValue:(id)arg1 offTargetValue:(id)arg2 ;
-(id)targetValueForPrimaryState:(NSInteger)arg0 ;


@end


#endif