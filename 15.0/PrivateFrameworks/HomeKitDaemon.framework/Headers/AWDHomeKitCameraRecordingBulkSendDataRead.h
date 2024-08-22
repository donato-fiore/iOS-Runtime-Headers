// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITCAMERARECORDINGBULKSENDDATAREAD_H
#define AWDHOMEKITCAMERARECORDINGBULKSENDDATAREAD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitCameraRecordingBulkSendDataRead : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger bitRate; // ivar: _bitRate
@property (nonatomic) NSUInteger bytesRead; // ivar: _bytesRead
@property (retain, nonatomic) NSString *cameraUUID; // ivar: _cameraUUID
@property (nonatomic) NSUInteger chunkSequenceNumber; // ivar: _chunkSequenceNumber
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) BOOL hasBitRate;
@property (nonatomic) BOOL hasBytesRead;
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (nonatomic) BOOL hasChunkSequenceNumber;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasIFrameInterval;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) BOOL hasImageWidth;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger iFrameInterval; // ivar: _iFrameInterval
@property (nonatomic) NSUInteger imageHeight; // ivar: _imageHeight
@property (nonatomic) NSUInteger imageWidth; // ivar: _imageWidth
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) unsigned int status; // ivar: _status
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