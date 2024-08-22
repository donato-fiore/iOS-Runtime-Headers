// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQUICKRELAYMETRIC_H
#define IDSQUICKRELAYMETRIC_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSQuickRelayMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *interfaceType; // ivar: _interfaceType
@property (readonly, nonatomic) NSNumber *isInitiator; // ivar: _isInitiator
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *participantCount; // ivar: _participantCount
@property (readonly, nonatomic) NSNumber *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSNumber *providerType; // ivar: _providerType
@property (readonly, nonatomic) NSNumber *resultCode; // ivar: _resultCode
@property (readonly, nonatomic) NSNumber *retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSNumber *skeEnabled; // ivar: _skeEnabled
@property (readonly, nonatomic) NSString *subServiceName; // ivar: _subServiceName
@property (readonly, nonatomic) NSNumber *subType; // ivar: _subType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *transportType; // ivar: _transportType
@property (readonly, nonatomic) NSNumber *type; // ivar: _type


-(id)initWithType:(id)arg0 eventSubType:(id)arg1 duration:(id)arg2 resultCode:(id)arg3 providerType:(id)arg4 transportType:(id)arg5 interfaceType:(id)arg6 skeEnabled:(id)arg7 isInitiator:(id)arg8 protocolVersion:(id)arg9 retryCount:(id)arg10 serviceName:(id)arg11 subServiceName:(id)arg12 participantCount:(id)arg13 ;


@end


#endif