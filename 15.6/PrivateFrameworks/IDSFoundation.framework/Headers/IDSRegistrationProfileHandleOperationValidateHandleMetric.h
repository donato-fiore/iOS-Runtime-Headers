// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSREGISTRATIONPROFILEHANDLEOPERATIONVALIDATEHANDLEMETRIC_H
#define IDSREGISTRATIONPROFILEHANDLEOPERATIONVALIDATEHANDLEMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationProfileHandleOperationValidateHandleMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *POSIXError; // ivar: _POSIXError
@property (readonly, nonatomic) NSNumber *URLError; // ivar: _URLError
@property (readonly, nonatomic) unsigned int connectionType; // ivar: _connectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *genericError; // ivar: _genericError
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int registrationError; // ivar: _registrationError
@property (readonly, nonatomic) unsigned int resultCode; // ivar: _resultCode
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int vettingStatus; // ivar: _vettingStatus


-(id)initWithGuid:(id)arg0 success:(BOOL)arg1 connectionType:(unsigned int)arg2 resultCode:(unsigned int)arg3 registrationError:(unsigned int)arg4 vettingStatus:(unsigned int)arg5 genericError:(id)arg6 URLError:(id)arg7 POSIXError:(id)arg8 ;


@end


#endif