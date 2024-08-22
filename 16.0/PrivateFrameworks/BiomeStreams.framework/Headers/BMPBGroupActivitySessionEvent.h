// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBGROUPACTIVITYSESSIONEVENT_H
#define BMPBGROUPACTIVITYSESSIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBGroupActivitySessionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityId; // ivar: _activityId
@property (retain, nonatomic) NSString *activitySessionId; // ivar: _activitySessionId
@property (retain, nonatomic) NSString *experienceType; // ivar: _experienceType
@property (readonly, nonatomic) BOOL hasActivityId;
@property (readonly, nonatomic) BOOL hasActivitySessionId;
@property (readonly, nonatomic) BOOL hasExperienceType;
@property (nonatomic) BOOL hasIsActive;
@property (readonly, nonatomic) BOOL hasMessagesChatGuid;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) NSMutableArray *memberHandles; // ivar: _memberHandles
@property (retain, nonatomic) NSString *messagesChatGuid; // ivar: _messagesChatGuid
@property (retain, nonatomic) NSMutableArray *participantHandles; // ivar: _participantHandles
@property (retain, nonatomic) NSString *sourceBundleId; // ivar: _sourceBundleId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)memberHandlesAtIndex:(NSUInteger)arg0 ;
-(id)participantHandlesAtIndex:(NSUInteger)arg0 ;
-(void)addMemberHandles:(id)arg0 ;
-(void)addParticipantHandles:(id)arg0 ;
-(void)clearMemberHandles;
-(void)clearParticipantHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif