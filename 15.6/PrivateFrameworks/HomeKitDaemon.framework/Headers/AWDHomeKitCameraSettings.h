// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITCAMERASETTINGS_H
#define AWDHOMEKITCAMERASETTINGS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitCameraSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsInclusionZone;
@property (nonatomic) BOOL hasIsReachabilityNotificationEnabled;
@property (nonatomic) BOOL hasIsRecordingAudioEnabled;
@property (nonatomic) BOOL hasIsRecordingCapable;
@property (nonatomic) BOOL hasIsRecordingEnabled;
@property (nonatomic) BOOL hasIsSmartBulletinBoardNotificationEnabled;
@property (readonly, nonatomic) BOOL hasNumActivityZonesBinString;
@property (nonatomic) BOOL hasRecordingEventTriggers;
@property (nonatomic) BOOL isInclusionZone; // ivar: _isInclusionZone
@property (nonatomic) BOOL isReachabilityNotificationEnabled; // ivar: _isReachabilityNotificationEnabled
@property (nonatomic) BOOL isRecordingAudioEnabled; // ivar: _isRecordingAudioEnabled
@property (nonatomic) BOOL isRecordingCapable; // ivar: _isRecordingCapable
@property (nonatomic) BOOL isRecordingEnabled; // ivar: _isRecordingEnabled
@property (nonatomic) BOOL isSmartBulletinBoardNotificationEnabled; // ivar: _isSmartBulletinBoardNotificationEnabled
@property (retain, nonatomic) NSString *numActivityZonesBinString; // ivar: _numActivityZonesBinString
@property (nonatomic) unsigned int recordingEventTriggers; // ivar: _recordingEventTriggers


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