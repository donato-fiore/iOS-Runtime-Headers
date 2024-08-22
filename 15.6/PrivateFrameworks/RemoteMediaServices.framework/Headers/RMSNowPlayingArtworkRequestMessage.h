// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSNOWPLAYINGARTWORKREQUESTMESSAGE_H
#define RMSNOWPLAYINGARTWORKREQUESTMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface RMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (nonatomic) float compressionQuality; // ivar: _compressionQuality
@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (nonatomic) BOOL hasCompressionQuality;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height; // ivar: _height
@property (nonatomic) unsigned int width; // ivar: _width


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