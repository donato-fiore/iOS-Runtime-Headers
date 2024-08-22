// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITEVENTTRIGGERUSERCONFIRMATIONRECEIVERSESSION_H
#define AWDHOMEKITEVENTTRIGGERUSERCONFIRMATIONRECEIVERSESSION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitEventTriggerUserConfirmationReceiverSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasResultErrorCode;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUserResponseDelay;
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger userResponseDelay; // ivar: _userResponseDelay


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