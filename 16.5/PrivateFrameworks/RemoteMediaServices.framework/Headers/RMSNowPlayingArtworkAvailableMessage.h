// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSNOWPLAYINGARTWORKAVAILABLEMESSAGE_H
#define RMSNOWPLAYINGARTWORKAVAILABLEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface RMSNowPlayingArtworkAvailableMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (nonatomic) BOOL hasSessionIdentifier;
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