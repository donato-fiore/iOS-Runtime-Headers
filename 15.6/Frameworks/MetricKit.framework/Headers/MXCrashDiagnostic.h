// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXCRASHDIAGNOSTIC_H
#define MXCRASHDIAGNOSTIC_H

@class NSNumber, NSString;


#import "MXDiagnostic.h"
#import "MXCallStackTree.h"

@interface MXCrashDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree; // ivar: _callStackTree
@property (readonly) NSNumber *exceptionCode; // ivar: _exceptionCode
@property (readonly) NSNumber *exceptionType; // ivar: _exceptionType
@property (readonly) NSNumber *signal; // ivar: _signal
@property (readonly) NSString *terminationReason; // ivar: _terminationReason
@property (readonly) NSString *virtualMemoryRegionInfo; // ivar: _virtualMemoryRegionInfo


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetaData:(id)arg0 applicationVersion:(id)arg1 terminationReason:(id)arg2 applicationSpecificInfo:(id)arg3 virtualMemoryRegionInfo:(id)arg4 exceptionType:(id)arg5 exceptionCode:(id)arg6 signal:(id)arg7 stackTrace:(id)arg8 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif