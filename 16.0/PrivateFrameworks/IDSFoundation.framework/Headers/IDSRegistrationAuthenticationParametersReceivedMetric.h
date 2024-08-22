// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREGISTRATIONAUTHENTICATIONPARAMETERSRECEIVEDMETRIC_H
#define IDSREGISTRATIONAUTHENTICATIONPARAMETERSRECEIVEDMETRIC_H

@class PBCodable<NSCopying>, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric, CUTAWDMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>



@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeIntervalSinceAuthenticationParameterRequest; // ivar: _timeIntervalSinceAuthenticationParameterRequest


-(id)initWithErrorCode:(NSInteger)arg0 timeIntervalSinceAuthenticationParameterRequest:(CGFloat)arg1 ;


@end


#endif