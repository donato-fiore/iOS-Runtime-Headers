// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXDISKWRITEEXCEPTIONDIAGNOSTIC_H
#define MXDISKWRITEEXCEPTIONDIAGNOSTIC_H

@class NSMeasurement;


#import "MXDiagnostic.h"
#import "MXCallStackTree.h"

@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree; // ivar: _callStackTree
@property (readonly) NSMeasurement *totalWritesCaused; // ivar: _totalWritesCaused


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetaData:(id)arg0 applicationVersion:(id)arg1 totalWritesCaused:(id)arg2 stackTrace:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif