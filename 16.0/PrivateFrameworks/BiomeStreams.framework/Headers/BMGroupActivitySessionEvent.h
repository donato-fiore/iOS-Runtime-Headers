// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMGROUPACTIVITYSESSIONEVENT_H
#define BMGROUPACTIVITYSESSIONEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMGroupActivitySessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *activityID; // ivar: _activityID
@property (readonly, copy, nonatomic) NSString *activitySessionID; // ivar: _activitySessionID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *experienceType; // ivar: _experienceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, copy, nonatomic) NSArray *memberHandles; // ivar: _memberHandles
@property (readonly, copy, nonatomic) NSString *messagesChatGuid; // ivar: _messagesChatGuid
@property (readonly, copy, nonatomic) NSArray *participantHandles; // ivar: _participantHandles
@property (readonly, copy, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithIsActive:(BOOL)arg0 sourceBundleID:(id)arg1 activitySessionID:(id)arg2 activityID:(id)arg3 messagesChatGuid:(id)arg4 participantHandles:(id)arg5 memberHandles:(id)arg6 experienceType:(id)arg7 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif