// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVEVERSIONSREQUEST_H
#define CKDPRECORDRETRIEVEVERSIONSREQUEST_H

@class PBRequest, NSString, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPAssetsToDownload.h"
#import "CKDPRequestedFields.h"

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // ivar: _assetsToDownload
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (readonly, nonatomic) BOOL hasMinimumVersionEtag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) NSString *minimumVersionEtag; // ivar: _minimumVersionEtag
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPRequestedFields *requestedFields; // ivar: _requestedFields


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