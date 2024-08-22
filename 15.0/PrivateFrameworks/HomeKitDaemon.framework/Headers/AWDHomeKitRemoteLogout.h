// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITREMOTELOGOUT_H
#define AWDHOMEKITREMOTELOGOUT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitRemoteLogout : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger delay; // ivar: _delay
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) BOOL hasRequester;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int requester; // ivar: _requester
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requesterAsString:(int)arg0 ;
-(int)StringAsRequester:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif