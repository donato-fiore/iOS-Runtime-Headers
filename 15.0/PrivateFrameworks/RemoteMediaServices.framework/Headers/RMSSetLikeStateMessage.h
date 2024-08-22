// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSSETLIKESTATEMESSAGE_H
#define RMSSETLIKESTATEMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface RMSSetLikeStateMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger databaseID; // ivar: _databaseID
@property (nonatomic) BOOL hasDatabaseID;
@property (nonatomic) BOOL hasItemID;
@property (nonatomic) BOOL hasLikeState;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (nonatomic) int likeState; // ivar: _likeState
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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