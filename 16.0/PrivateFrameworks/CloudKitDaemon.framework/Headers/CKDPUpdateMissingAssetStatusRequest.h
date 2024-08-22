// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPUPDATEMISSINGASSETSTATUSREQUEST_H
#define CKDPUPDATEMISSINGASSETSTATUSREQUEST_H

@class PBRequest, NSString, CKDPRecordIdentifier, NSMutableArray;
@protocol NSCopying;



@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying>

 {
    ? _packageAssetSizes;
    ? _has;
}


@property (retain, nonatomic) NSString *assetPutReceipt; // ivar: _assetPutReceipt
@property (nonatomic) NSInteger assetSize; // ivar: _assetSize
@property (readonly, nonatomic) BOOL hasAssetPutReceipt;
@property (nonatomic) BOOL hasAssetSize;
@property (readonly, nonatomic) BOOL hasMissingAssetStatusRecordID;
@property (nonatomic) BOOL hasRecovered;
@property (retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID; // ivar: _missingAssetStatusRecordID
@property (readonly, nonatomic) *NSInteger packageAssetSizes;
@property (readonly, nonatomic) NSUInteger packageAssetSizesCount;
@property (retain, nonatomic) NSMutableArray *packagePutReceipts; // ivar: _packagePutReceipts
@property (nonatomic) BOOL recovered; // ivar: _recovered


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)packageAssetSizeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)packagePutReceiptsAtIndex:(NSUInteger)arg0 ;
-(void)addPackageAssetSize:(NSInteger)arg0 ;
-(void)addPackagePutReceipts:(id)arg0 ;
-(void)clearPackageAssetSizes;
-(void)clearPackagePutReceipts;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif