// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXCPUEXCEPTIONDIAGNOSTIC_H
#define MXCPUEXCEPTIONDIAGNOSTIC_H

@class NSMeasurement;


#import "MXDiagnostic.h"
#import "MXCallStackTree.h"

@interface MXCPUExceptionDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree; // ivar: _callStackTree
@property (readonly) NSMeasurement *totalCPUTime; // ivar: _totalCPUTime
@property (readonly) NSMeasurement *totalSampledTime; // ivar: _totalSampledTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetaData:(id)arg0 applicationVersion:(id)arg1 callStack:(id)arg2 totalCpuTime:(id)arg3 totalSampledTime:(id)arg4 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif