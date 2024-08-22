// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACVOLUMEWARNINGMESSAGE_H
#define NACVOLUMEWARNINGMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACVolumeWarningMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasVolumeWarningEnabled;
@property (nonatomic) BOOL hasVolumeWarningState;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (nonatomic) int volumeWarningState; // ivar: _volumeWarningState


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