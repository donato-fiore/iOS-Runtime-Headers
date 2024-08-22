// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXDIAGNOSTICPAYLOAD_H
#define MXDIAGNOSTICPAYLOAD_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXDiagnosticPayload : NSObject <NSSecureCoding>



@property (readonly) NSArray *appLaunchDiagnostics; // ivar: _appLaunchDiagnostics
@property (readonly) NSArray *cpuExceptionDiagnostics; // ivar: _cpuExceptionDiagnostics
@property (readonly) NSArray *crashDiagnostics; // ivar: _crashDiagnostics
@property (readonly) NSArray *diskWriteExceptionDiagnostics; // ivar: _diskWriteExceptionDiagnostics
@property (readonly) NSArray *hangDiagnostics; // ivar: _hangDiagnostics
@property (readonly) NSDate *timeStampBegin; // ivar: _timeStampBegin
@property (readonly) NSDate *timeStampEnd; // ivar: _timeStampEnd


+(BOOL)supportsSecureCoding;
-(id)JSONRepresentation;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeStampBegin:(id)arg0 withTimeStampEnd:(id)arg1 withDiagnostics:(id)arg2 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif