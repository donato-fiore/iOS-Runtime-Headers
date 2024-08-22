// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPSTREAMINGASSET_H
#define CKDPSTREAMINGASSET_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPStreamingAssetIdentifier.h"
#import "CKDPStreamingAssetRetrieveAssetResponse.h"
#import "CKDPStreamingAssetSaveAssetRequest.h"
#import "CKDPStreamingAssetSaveAssetResponse.h"

@interface CKDPStreamingAsset : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPStreamingAssetIdentifier *assetId; // ivar: _assetId
@property (readonly, nonatomic) BOOL hasAssetId;
@property (readonly, nonatomic) BOOL hasRetrieveAssetResponse;
@property (readonly, nonatomic) BOOL hasSaveAssetRequest;
@property (readonly, nonatomic) BOOL hasSaveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse; // ivar: _retrieveAssetResponse
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest; // ivar: _saveAssetRequest
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse; // ivar: _saveAssetResponse


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