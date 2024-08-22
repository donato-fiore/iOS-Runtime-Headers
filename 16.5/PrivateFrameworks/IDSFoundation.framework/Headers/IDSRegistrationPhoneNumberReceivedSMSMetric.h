// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSREGISTRATIONPHONENUMBERRECEIVEDSMSMETRIC_H
#define IDSREGISTRATIONPHONENUMBERRECEIVEDSMSMETRIC_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationPhoneNumberReceivedSMSMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *smsRoundTripDuration; // ivar: _smsRoundTripDuration
@property (readonly) Class superclass;


-(id)initWithGuid:(id)arg0 smsRoundTripDuration:(id)arg1 ;


@end


#endif