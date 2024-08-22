// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPFETCHARCHIVEDRECORDSREQUEST_H
#define CKDPFETCHARCHIVEDRECORDSREQUEST_H

@class PBRequest, NSData, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPAssetsToDownload.h"

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *archiveContinuationToken; // ivar: _archiveContinuationToken
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // ivar: _assetsToDownload
@property (readonly, nonatomic) BOOL hasArchiveContinuationToken;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) BOOL hasNewestFirst;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) unsigned int limit; // ivar: _limit
@property (nonatomic) BOOL newestFirst; // ivar: _newestFirst
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