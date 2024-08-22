// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSREGISTRATIONOPERATIONREGISTERMETRIC_H
#define IDSREGISTRATIONOPERATIONREGISTERMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationOperationRegisterMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *POSIXError; // ivar: _POSIXError
@property (readonly, nonatomic) NSNumber *URLError; // ivar: _URLError
@property (readonly, nonatomic) unsigned int connectionType; // ivar: _connectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *genericError; // ivar: _genericError
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *heartbeatDelay; // ivar: _heartbeatDelay
@property (readonly, nonatomic) BOOL isHeartbeatRegister; // ivar: _isHeartbeatRegister
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int registrationError; // ivar: _registrationError
@property (readonly, nonatomic) unsigned int resultCode; // ivar: _resultCode
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(id)initWithGuid:(id)arg0 success:(BOOL)arg1 connectionType:(unsigned int)arg2 resultCode:(unsigned int)arg3 registrationType:(unsigned int)arg4 isHeartbeatRegister:(BOOL)arg5 heartbeatDelay:(id)arg6 genericError:(id)arg7 URLError:(id)arg8 POSIXError:(id)arg9 ;


@end


#endif