// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERARECORDINGCLIPNOTIFICATION_H
#define AWDHOMEKITCAMERARECORDINGCLIPNOTIFICATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitCameraRecordingClipNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *cameraUUID; // ivar: _cameraUUID
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasRecordingEventTriggers;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger recordingEventTriggers; // ivar: _recordingEventTriggers
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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