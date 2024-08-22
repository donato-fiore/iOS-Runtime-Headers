// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSREGISTRATIONCOMPLETEDMETRIC_H
#define IDSREGISTRATIONCOMPLETEDMETRIC_H

@class PBCodable<NSCopying>, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric, CUTAWDMetric, CUTRTCMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric, CUTRTCMetric>



@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, nonatomic) NSInteger circleStatus; // ivar: _circleStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger registrationError; // ivar: _registrationError
@property (readonly, nonatomic) int registrationType; // ivar: _registrationType
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wasSuccessful; // ivar: _wasSuccessful


-(id)initWithRegistrationType:(int)arg0 serviceIdentifier:(id)arg1 wasSuccessful:(BOOL)arg2 registrationError:(NSInteger)arg3 circleStatus:(NSInteger)arg4 ;


@end


#endif