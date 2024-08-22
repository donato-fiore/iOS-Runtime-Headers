// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFIRRIGATIONSYSTEMSERVICESTATE_H
#define HFIRRIGATIONSYSTEMSERVICESTATE_H



#import "HFServiceState.h"

@interface HFIrrigationSystemServiceState : HFServiceState

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)_typeForActiveState:(BOOL)arg0 usageState:(NSInteger)arg1 programMode:(NSInteger)arg2 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
-(NSInteger)primaryState;
-(NSInteger)priority;
-(id)initWithBatchReadResponse:(id)arg0 ;
-(id)stateTypeIdentifier;


@end


#endif