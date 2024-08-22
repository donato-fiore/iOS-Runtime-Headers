// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPASSETSTODOWNLOAD_H
#define CKDPASSETSTODOWNLOAD_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPRequestedFields.h"

@interface CKDPAssetsToDownload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allAssets; // ivar: _allAssets
@property (retain, nonatomic) CKDPRequestedFields *assetFields; // ivar: _assetFields
@property (nonatomic) BOOL hasAllAssets;
@property (readonly, nonatomic) BOOL hasAssetFields;


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