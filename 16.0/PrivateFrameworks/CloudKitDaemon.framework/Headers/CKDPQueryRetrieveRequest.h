// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPQUERYRETRIEVEREQUEST_H
#define CKDPQUERYRETRIEVEREQUEST_H

@class PBRequest, NSData, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPAssetsToDownload.h"
#import "CKDPQuery.h"
#import "CKDPRequestedFields.h"

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // ivar: _assetsToDownload
@property (retain, nonatomic) NSData *continuationMarker; // ivar: _continuationMarker
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (nonatomic) BOOL hasLimit;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) unsigned int limit; // ivar: _limit
@property (retain, nonatomic) CKDPQuery *query; // ivar: _query
@property (retain, nonatomic) CKDPRequestedFields *requestedFields; // ivar: _requestedFields
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


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