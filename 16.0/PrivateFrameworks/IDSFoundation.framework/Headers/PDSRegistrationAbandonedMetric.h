// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSREGISTRATIONABANDONEDMETRIC_H
#define PDSREGISTRATIONABANDONEDMETRIC_H

@class NSString, NSDictionary, NSDate, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface PDSRegistrationAbandonedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *failureReason; // ivar: _failureReason
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *heartbeatDate; // ivar: _heartbeatDate
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *registrationReason; // ivar: _registrationReason
@property (readonly) Class superclass;


-(id)initWithFailureReason:(id)arg0 registrationReason:(id)arg1 heartbeatDate:(id)arg2 ;


@end


#endif