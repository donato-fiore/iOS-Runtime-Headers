// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMSYSTEMPROBE_H
#define MXMSYSTEMPROBE_H

@class NSThread;


#import "MXMProbe.h"
#import "MXMMutableSampleData.h"

@interface MXMSystemProbe : MXMProbe {
    MXMMutableSampleData *_data;
    NSThread *_updateThread;
}




+(id)probe;
-(id)init;
-(void)_beginUpdates;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 cpuInfo:(struct processor_basic_info *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 cpuLoad:(struct processor_cpu_load_info *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 hostInfo:(struct vm_statistics64 *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 loadInfo:(struct processor_set_load_info *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 processorCount:(unsigned int)arg2 ;
-(void)_gatherConstantSystemProperties;
-(void)_pollProcessorLoadInformationWithData:(id)arg0 ;
-(void)_pollSystemBatteryWithData:(id)arg0 ;
-(void)_pollSystemHostProcessorInfoWithData:(id)arg0 ;
-(void)_pollSystemLoadInformationWithData:(id)arg0 ;
-(void)_pollSystemLoop;
-(void)_pollSystemMainBody;
-(void)_pollSystemThermalsWithData:(id)arg0 ;
-(void)_prepareData;
-(void)_stopUpdates;


@end


#endif