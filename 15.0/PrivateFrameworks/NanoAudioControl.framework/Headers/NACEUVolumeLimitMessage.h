// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACEUVOLUMELIMITMESSAGE_H
#define NACEUVOLUMELIMITMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACEUVolumeLimitMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) float eUVolumeLimit; // ivar: _eUVolumeLimit
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasEUVolumeLimit;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier


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