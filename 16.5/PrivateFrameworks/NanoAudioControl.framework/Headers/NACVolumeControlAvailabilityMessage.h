// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACVOLUMECONTROLAVAILABILITYMESSAGE_H
#define NACVOLUMECONTROLAVAILABILITYMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACVolumeControlAvailabilityMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasVolumeControlAvailable;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable


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