// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPASSET_H
#define CKDPASSET_H

@class PBCodable, NSString, NSData, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"
#import "CKDPReservedVoucher.h"

@interface CKDPAsset : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *assetAuthorizationResponseUUID; // ivar: _assetAuthorizationResponseUUID
@property (retain, nonatomic) NSData *clearAssetKey; // ivar: _clearAssetKey
@property (nonatomic) NSInteger constructedAssetDownloadEstimatedSize; // ivar: _constructedAssetDownloadEstimatedSize
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters; // ivar: _constructedAssetDownloadParameters
@property (retain, nonatomic) NSString *constructedAssetDownloadURL; // ivar: _constructedAssetDownloadURL
@property (nonatomic) NSInteger constructedAssetDownloadURLExpiration; // ivar: _constructedAssetDownloadURLExpiration
@property (retain, nonatomic) NSString *contentBaseURL; // ivar: _contentBaseURL
@property (retain, nonatomic) NSString *downloadBaseURL; // ivar: _downloadBaseURL
@property (retain, nonatomic) NSData *downloadRequest; // ivar: _downloadRequest
@property (retain, nonatomic) NSString *downloadToken; // ivar: _downloadToken
@property (nonatomic) NSInteger downloadTokenExpiration; // ivar: _downloadTokenExpiration
@property (nonatomic) NSInteger downloadURLExpiration; // ivar: _downloadURLExpiration
@property (readonly, nonatomic) BOOL hasAssetAuthorizationResponseUUID;
@property (readonly, nonatomic) BOOL hasClearAssetKey;
@property (nonatomic) BOOL hasConstructedAssetDownloadEstimatedSize;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadURL;
@property (nonatomic) BOOL hasConstructedAssetDownloadURLExpiration;
@property (readonly, nonatomic) BOOL hasContentBaseURL;
@property (readonly, nonatomic) BOOL hasDownloadBaseURL;
@property (readonly, nonatomic) BOOL hasDownloadRequest;
@property (readonly, nonatomic) BOOL hasDownloadToken;
@property (nonatomic) BOOL hasDownloadTokenExpiration;
@property (nonatomic) BOOL hasDownloadURLExpiration;
@property (readonly, nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (readonly, nonatomic) BOOL hasRequestor;
@property (readonly, nonatomic) BOOL hasReservedVoucher;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasUploadReceipt;
@property (retain, nonatomic) NSString *owner; // ivar: _owner
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) CKDPRecordIdentifier *recordId; // ivar: _recordId
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (retain, nonatomic) NSString *requestor; // ivar: _requestor
@property (retain, nonatomic) CKDPReservedVoucher *reservedVoucher; // ivar: _reservedVoucher
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSInteger size; // ivar: _size
@property (retain, nonatomic) NSString *uploadReceipt; // ivar: _uploadReceipt


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