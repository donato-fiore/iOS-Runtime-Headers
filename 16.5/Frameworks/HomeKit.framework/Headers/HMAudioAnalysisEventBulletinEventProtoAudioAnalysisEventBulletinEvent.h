// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOANALYSISEVENTBULLETINEVENTPROTOAUDIOANALYSISEVENTBULLETINEVENT_H
#define HMAUDIOANALYSISEVENTBULLETINEVENTPROTOAUDIOANALYSISEVENTBULLETINEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAudioAnalysisEventBulletinEventProtoAudioAnalysisEventBulletinEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (nonatomic) NSInteger dateOfOccurrence; // ivar: _dateOfOccurrence
@property (nonatomic) NSInteger eventStartDate; // ivar: _eventStartDate
@property (readonly, nonatomic) BOOL hasAccessoryIdentifier;
@property (nonatomic) BOOL hasDateOfOccurrence;
@property (nonatomic) BOOL hasEventStartDate;
@property (readonly, nonatomic) BOOL hasHomeIdentifier;
@property (readonly, nonatomic) BOOL hasNotificationUUID;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasThreadIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (retain, nonatomic) NSString *notificationUUID; // ivar: _notificationUUID
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif