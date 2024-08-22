// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMCPUMETRIC_H
#define MXMCPUMETRIC_H

@class NSNumber, NSString;


#import "MXMMetric.h"
#import "MXMInstrument.h"

@interface MXMCPUMetric : MXMMetric

@property (readonly, copy, nonatomic) MXMInstrument *instrument;
@property (readonly, nonatomic) NSNumber *processIdentifier;
@property (readonly, nonatomic) NSString *processName;


+(id)currentProcess;
-(BOOL)_shouldConstructProbe;
-(BOOL)harvestData:(*id)arg0 error:(*id)arg1 ;
-(id)_constructProbe;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 filter:(id)arg1 ;
-(id)initWithProcessIdentifier:(int)arg0 ;
-(id)initWithProcessName:(id)arg0 ;


@end


#endif