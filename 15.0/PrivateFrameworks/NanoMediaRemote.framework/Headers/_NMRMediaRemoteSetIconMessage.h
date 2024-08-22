// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRMEDIAREMOTESETICONMESSAGE_H
#define _NMRMEDIAREMOTESETICONMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _NMRMediaRemoteSetIconMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasIconData;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (readonly, nonatomic) BOOL hasOriginalDigest;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSData *iconData; // ivar: _iconData
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