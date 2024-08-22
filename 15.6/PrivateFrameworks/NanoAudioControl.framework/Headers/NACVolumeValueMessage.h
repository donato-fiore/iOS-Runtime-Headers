// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NACVOLUMEVALUEMESSAGE_H
#define NACVOLUMEVALUEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACVolumeValueMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasVolumeValue;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) float volumeValue; // ivar: _volumeValue


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