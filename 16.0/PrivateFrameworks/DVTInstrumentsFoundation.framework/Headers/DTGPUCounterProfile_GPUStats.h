// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTGPUCOUNTERPROFILE_GPUSTATS_H
#define DTGPUCOUNTERPROFILE_GPUSTATS_H



#import "DTGPUCounterProfile.h"

@interface DTGPUCounterProfile_GPUStats : DTGPUCounterProfile {
    NSUInteger _currentIORegSamplingInterval;
    EMA<unsigned long long> _deviceUtilization;
}




+(id)create:(id)arg0 ;
-(BOOL)start:(NSUInteger)arg0 ;
-(id)initWithProfile:(NSUInteger)arg0 device:(id)arg1 ;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;


@end


#endif