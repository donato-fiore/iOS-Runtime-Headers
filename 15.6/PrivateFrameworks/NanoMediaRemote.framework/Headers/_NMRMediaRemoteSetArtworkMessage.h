// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRMEDIAREMOTESETARTWORKMESSAGE_H
#define _NMRMEDIAREMOTESETARTWORKMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _NMRMediaRemoteSetArtworkMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasJpegData;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (readonly, nonatomic) BOOL hasOriginalDigest;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSData *jpegData; // ivar: _jpegData
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (retain, nonatomic) NSData *originalDigest; // ivar: _originalDigest
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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