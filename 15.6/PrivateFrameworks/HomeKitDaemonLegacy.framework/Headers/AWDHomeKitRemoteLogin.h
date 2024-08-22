// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITREMOTELOGIN_H
#define AWDHOMEKITREMOTELOGIN_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger delay; // ivar: _delay
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) BOOL hasLoginType;
@property (nonatomic) BOOL hasRequester;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int loginType; // ivar: _loginType
@property (nonatomic) int requester; // ivar: _requester
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)loginTypeAsString:(int)arg0 ;
-(id)requesterAsString:(int)arg0 ;
-(int)StringAsLoginType:(id)arg0 ;
-(int)StringAsRequester:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif