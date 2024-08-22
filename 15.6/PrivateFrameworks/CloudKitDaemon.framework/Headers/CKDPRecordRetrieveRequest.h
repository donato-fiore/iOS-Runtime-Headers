// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVEREQUEST_H
#define CKDPRECORDRETRIEVEREQUEST_H

@class PBRequest, NSString, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPAssetsToDownload.h"
#import "CKDPRecordRetrieveRequestRetrieveAssetURL.h"
#import "CKDPRequestedFields.h"

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // ivar: _assetsToDownload
@property (retain, nonatomic) NSString *clientVersionETag; // ivar: _clientVersionETag
@property (retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL; // ivar: _getAssetURL
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (readonly, nonatomic) BOOL hasClientVersionETag;
@property (readonly, nonatomic) BOOL hasGetAssetURL;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (nonatomic) BOOL hasShouldFailBatch;
@property (readonly, nonatomic) BOOL hasVersionETag;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPRequestedFields *requestedFields; // ivar: _requestedFields
@property (nonatomic) BOOL shouldFailBatch; // ivar: _shouldFailBatch
@property (retain, nonatomic) NSString *versionETag; // ivar: _versionETag


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif