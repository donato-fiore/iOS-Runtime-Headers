// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERARECORDINGFRAGMENTANALYZED_H
#define AWDHOMEKITCAMERARECORDINGFRAGMENTANALYZED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitCameraRecordingFragmentAnalyzed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger analysisResultCode; // ivar: _analysisResultCode
@property (retain, nonatomic) NSString *cameraUUID; // ivar: _cameraUUID
@property (retain, nonatomic) NSString *clipModelID; // ivar: _clipModelID
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) BOOL hasAnalysisResultCode;
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (readonly, nonatomic) BOOL hasClipModelID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasRecordingReason;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int recordingReason; // ivar: _recordingReason
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordingReasonAsString:(int)arg0 ;
-(int)StringAsRecordingReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif