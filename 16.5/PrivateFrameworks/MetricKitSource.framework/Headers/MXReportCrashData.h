// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXREPORTCRASHDATA_H
#define MXREPORTCRASHDATA_H

@class MXCrashDiagnostic;


#import "MXSourceData.h"

@interface MXReportCrashData : MXSourceData

@property (retain) MXCrashDiagnostic *crashDiagnostic; // ivar: _crashDiagnostic


+(BOOL)supportsSecureCoding;
-(id)initPayloadDataWithDiagnostics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif