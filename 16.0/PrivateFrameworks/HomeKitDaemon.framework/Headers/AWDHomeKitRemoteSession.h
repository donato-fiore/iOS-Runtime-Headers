// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITREMOTESESSION_H
#define AWDHOMEKITREMOTESESSION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitRemoteSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int closeReason; // ivar: _closeReason
@property (nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasCloseReason;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int role; // ivar: _role
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