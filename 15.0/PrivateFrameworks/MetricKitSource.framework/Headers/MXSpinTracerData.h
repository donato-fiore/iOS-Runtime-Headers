// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXSPINTRACERDATA_H
#define MXSPINTRACERDATA_H

@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;


#import "MXSourceData.h"

@interface MXSpinTracerData : MXSourceData

@property (retain) MXCPUExceptionDiagnostic *cpuExceptionDiagnostic; // ivar: _cpuExceptionDiagnostic
@property (retain) MXDiskWriteExceptionDiagnostic *diskWriteExceptionDiagnostic; // ivar: _diskWriteExceptionDiagnostic


+(BOOL)supportsSecureCoding;
-(id)initPayloadDataWithDiagnostics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif