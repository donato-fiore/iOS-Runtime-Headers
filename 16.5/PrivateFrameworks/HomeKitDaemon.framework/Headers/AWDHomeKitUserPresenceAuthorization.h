// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITUSERPRESENCEAUTHORIZATION_H
#define AWDHOMEKITUSERPRESENCEAUTHORIZATION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitUserPresenceAuthorization : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int auth; // ivar: _auth
@property (nonatomic) BOOL hasAuth;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAuth:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif