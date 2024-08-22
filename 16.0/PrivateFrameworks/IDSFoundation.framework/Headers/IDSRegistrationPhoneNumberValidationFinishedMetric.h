// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREGISTRATIONPHONENUMBERVALIDATIONFINISHEDMETRIC_H
#define IDSREGISTRATIONPHONENUMBERVALIDATIONFINISHEDMETRIC_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationPhoneNumberValidationFinishedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *numberOfSMSSent; // ivar: _numberOfSMSSent
@property (readonly, nonatomic) unsigned int registrationError; // ivar: _registrationError
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *validationDuration; // ivar: _validationDuration


-(id)initWithGuid:(id)arg0 registrationError:(unsigned int)arg1 validationDuration:(id)arg2 numberOfSMSSent:(id)arg3 ;


@end


#endif