// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLMEMORYASSET_H
#define CPLMEMORYASSET_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "CPLMemoryAssetFlag.h"

@interface CPLMemoryAsset : PBCodable <NSCopying>



@property (retain, nonatomic) CPLMemoryAssetFlag *assetFlag; // ivar: _assetFlag
@property (retain, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (retain, nonatomic) NSData *assetMovieData; // ivar: _assetMovieData
@property (readonly, nonatomic) BOOL hasAssetFlag;
@property (readonly, nonatomic) BOOL hasAssetIdentifier;
@property (readonly, nonatomic) BOOL hasAssetMovieData;
@property (readonly, nonatomic) BOOL hasMasterFingerprint;
@property (retain, nonatomic) NSString *masterFingerprint; // ivar: _masterFingerprint


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