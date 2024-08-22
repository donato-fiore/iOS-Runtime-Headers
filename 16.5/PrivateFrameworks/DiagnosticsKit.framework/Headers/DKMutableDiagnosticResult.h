// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKMUTABLEDIAGNOSTICRESULT_H
#define DKMUTABLEDIAGNOSTICRESULT_H

@class NSDictionary, NSArray, NSNumber;


#import "DKDiagnosticResult.h"

@interface DKMutableDiagnosticResult : DKDiagnosticResult

@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSArray *fileSandboxTokens; // ivar: _fileSandboxTokens
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (retain, nonatomic) NSNumber *statusCode; // ivar: _statusCode
@property (retain, nonatomic) NSArray *uploadStatus; // ivar: _uploadStatus


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif