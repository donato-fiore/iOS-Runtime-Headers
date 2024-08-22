// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMHEALTHKITWORKOUTEVENT_H
#define BMHEALTHKITWORKOUTEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMHealthKitWorkoutEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (copy, nonatomic) NSString *activityUUID; // ivar: _activityUUID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFirstPartyDonation; // ivar: _isFirstPartyDonation
@property (readonly, nonatomic) BOOL isIndoor; // ivar: _isIndoor
@property (readonly, nonatomic) BOOL isUpdate; // ivar: _isUpdate
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithIsFirstPartyDonation:(BOOL)arg0 isIndoor:(BOOL)arg1 activityType:(id)arg2 activityUUID:(id)arg3 eventType:(NSUInteger)arg4 ;
-(id)initWithIsFirstPartyDonation:(BOOL)arg0 isIndoor:(BOOL)arg1 activityType:(id)arg2 activityUUID:(id)arg3 eventType:(NSUInteger)arg4 isUpdate:(BOOL)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif