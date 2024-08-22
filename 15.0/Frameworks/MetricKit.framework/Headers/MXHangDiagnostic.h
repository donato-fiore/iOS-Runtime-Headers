// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXHANGDIAGNOSTIC_H
#define MXHANGDIAGNOSTIC_H

@class NSMeasurement;


#import "MXDiagnostic.h"
#import "MXCallStackTree.h"

@interface MXHangDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree; // ivar: _callStackTree
@property (readonly) NSMeasurement *hangDuration; // ivar: _hangDuration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetaData:(id)arg0 applicationVersion:(id)arg1 callStack:(id)arg2 hangDuration:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif