// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREGISTRATIONOPERATIONGETHANDLESMETRIC_H
#define IDSREGISTRATIONOPERATIONGETHANDLESMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationOperationGetHandlesMetric : NSObject <CUTCoreAnalyticsMetric>



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


-(id)initWithGuid:(id)arg0 success:(BOOL)arg1 connectionType:(unsigned int)arg2 resultCode:(unsigned int)arg3 registrationType:(unsigned int)arg4 genericError:(id)arg5 URLError:(id)arg6 POSIXError:(id)arg7 ;


@end


#endif