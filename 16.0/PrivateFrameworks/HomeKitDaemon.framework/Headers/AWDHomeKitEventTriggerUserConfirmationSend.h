// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITEVENTTRIGGERUSERCONFIRMATIONSEND_H
#define AWDHOMEKITEVENTTRIGGERUSERCONFIRMATIONSEND_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitEventTriggerUserConfirmationSend : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasResultErrorCode;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
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