// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSMACHINESTATUS_H
#define HDFITNESSMACHINESTATUS_H



#import "HDHealthServiceCharacteristic.h"

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic

@property (nonatomic) NSUInteger machineState; // ivar: _machineState


+(id)_buildWithBinaryValue:(id)arg0 error:(*id)arg1 ;
+(id)unitTest_fakeStatusUpdateForState:(NSUInteger)arg0 ;
+(id)uuid;
-(id)description;


@end


#endif