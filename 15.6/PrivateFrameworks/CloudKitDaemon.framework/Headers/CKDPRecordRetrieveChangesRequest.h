// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVECHANGESREQUEST_H
#define CKDPRECORDRETRIEVECHANGESREQUEST_H

@class PBRequest, NSData, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPAssetsToDownload.h"
#import "CKDPRequestedFields.h"

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // ivar: _assetsToDownload
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (nonatomic) BOOL hasIgnoreCallingDeviceChanges;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) BOOL hasNewestFirst;
@property (nonatomic) BOOL hasRequestedChangeTypes;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) BOOL ignoreCallingDeviceChanges; // ivar: _ignoreCallingDeviceChanges
@property (nonatomic) unsigned int maxChanges; // ivar: _maxChanges
@property (nonatomic) BOOL newestFirst; // ivar: _newestFirst
@property (nonatomic) int requestedChangeTypes; // ivar: _requestedChangeTypes
@property (retain, nonatomic) CKDPRequestedFields *requestedFields; // ivar: _requestedFields
@property (retain, nonatomic) NSData *syncContinuationToken; // ivar: _syncContinuationToken
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestedChangeTypesAsString:(int)arg0 ;
-(int)StringAsRequestedChangeTypes:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif