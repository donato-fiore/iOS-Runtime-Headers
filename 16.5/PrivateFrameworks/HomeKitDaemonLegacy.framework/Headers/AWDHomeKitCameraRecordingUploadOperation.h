// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERARECORDINGUPLOADOPERATION_H
#define AWDHOMEKITCAMERARECORDINGUPLOADOPERATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clipModelUUID; // ivar: _clipModelUUID
@property (nonatomic) BOOL didCausePreviousClipToFinalizeBecauseMaxDurationExceeded; // ivar: _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) BOOL hasClipModelUUID;
@property (nonatomic) BOOL hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasOperationStartTime;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasRunTime;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalClipDuration;
@property (nonatomic) NSUInteger operationStartTime; // ivar: _operationStartTime
@property (nonatomic) int operationType; // ivar: _operationType
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (nonatomic) NSUInteger runTime; // ivar: _runTime
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger totalClipDuration; // ivar: _totalClipDuration


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationTypeAsString:(int)arg0 ;
-(int)StringAsOperationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif