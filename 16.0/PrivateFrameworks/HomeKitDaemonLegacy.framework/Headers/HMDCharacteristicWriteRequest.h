// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICWRITEREQUEST_H
#define HMDCHARACTERISTICWRITEREQUEST_H

@class NSData, NSUUID;


#import "HMDCharacteristicRequest.h"

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest

@property (readonly, nonatomic) NSData *authorizationData; // ivar: _authorizationData
@property (readonly, nonatomic) NSData *contextData; // ivar: _contextData
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL includeResponseValue; // ivar: _includeResponseValue
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)logCategory;
+(id)writeRequestForTransitionFetchWithLightProfile:(id)arg0 ;
+(id)writeRequestForTransitionStartWithLightProfile:(id)arg0 naturalLightingEnabled:(BOOL)arg1 startDate:(id)arg2 type:(NSUInteger)arg3 ;
+(id)writeRequestForTransitionStartWithLightProfile:(id)arg0 naturalLightingEnabled:(BOOL)arg1 startDate:(id)arg2 type:(NSUInteger)arg3 dataSource:(id)arg4 ;
+(id)writeRequestWithCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 identifier:(id)arg3 type:(NSUInteger)arg4 ;
+(id)writeRequestWithCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 identifier:(id)arg3 type:(NSUInteger)arg4 includeResponseValue:(BOOL)arg5 ;
+(id)writeRequestWithCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 identifier:(id)arg3 type:(NSUInteger)arg4 includeResponseValue:(BOOL)arg5 contextData:(id)arg6 ;
+(id)writeRequestWithCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 type:(NSUInteger)arg3 ;
-(id)attributeDescriptions;
-(id)initWithCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 identifier:(id)arg3 type:(NSUInteger)arg4 includeResponseValue:(BOOL)arg5 contextData:(id)arg6 ;


@end


#endif