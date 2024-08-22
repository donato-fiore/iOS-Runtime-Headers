// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPOWERSTATETARGETVALUETUPLE_H
#define HFPOWERSTATETARGETVALUETUPLE_H

@class NSString, NSNumber;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFPowerStateTargetValueTuple : NSObject <NAIdentifiable>



@property (readonly, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *offTargetValue; // ivar: _offTargetValue
@property (readonly, nonatomic) NSNumber *onTargetValue; // ivar: _onTargetValue
@property (readonly) Class superclass;


+(id)fanStateTargetValueTuple;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)primaryStateForTargetValue:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristicType:(id)arg0 onTargetValue:(id)arg1 offTargetValue:(id)arg2 ;
-(id)targetValueForPrimaryState:(NSInteger)arg0 ;


@end


#endif