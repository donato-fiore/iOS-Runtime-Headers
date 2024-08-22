// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLMEMORYASSETFLAG_H
#define CPLMEMORYASSETFLAG_H

@class PBCodable;
@protocol NSCopying;



@interface CPLMemoryAssetFlag : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsCurated;
@property (nonatomic) BOOL hasIsExtendedCurated;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL hasIsMovieCurated;
@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL hasIsUserCurated;
@property (nonatomic) BOOL isCurated; // ivar: _isCurated
@property (nonatomic) BOOL isExtendedCurated; // ivar: _isExtendedCurated
@property (nonatomic) BOOL isKeyAsset; // ivar: _isKeyAsset
@property (nonatomic) BOOL isMovieCurated; // ivar: _isMovieCurated
@property (nonatomic) BOOL isRepresentative; // ivar: _isRepresentative
@property (nonatomic) BOOL isUserCurated; // ivar: _isUserCurated


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