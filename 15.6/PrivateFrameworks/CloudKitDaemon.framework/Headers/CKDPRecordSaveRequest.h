// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDSAVEREQUEST_H
#define CKDPRECORDSAVEREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "CKDPRecordSaveRequestConflictLoserUpdate.h"
#import "CKDPRecord.h"
#import "CKDPRequestedFields.h"
#import "CKDPRecordSaveRequestShareIdUpdate.h"

@interface CKDPRecordSaveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // ivar: _conflictLoserUpdate
@property (retain, nonatomic) NSMutableArray *conflictLosersToResolves; // ivar: _conflictLosersToResolves
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // ivar: _fieldsToDeleteIfExistOnMerges
@property (readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property (readonly, nonatomic) BOOL hasEtag;
@property (nonatomic) BOOL hasMerge;
@property (readonly, nonatomic) BOOL hasParentChainProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRecord;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (nonatomic) BOOL hasSaveSemantics;
@property (readonly, nonatomic) BOOL hasShareEtag;
@property (readonly, nonatomic) BOOL hasShareIDUpdate;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (nonatomic) BOOL merge; // ivar: _merge
@property (retain, nonatomic) NSString *parentChainProtectionInfoTag; // ivar: _parentChainProtectionInfoTag
@property (retain, nonatomic) CKDPRecord *record; // ivar: _record
@property (retain, nonatomic) NSString *recordProtectionInfoTag; // ivar: _recordProtectionInfoTag
@property (retain, nonatomic) CKDPRequestedFields *requestedFields; // ivar: _requestedFields
@property (nonatomic) int saveSemantics; // ivar: _saveSemantics
@property (retain, nonatomic) NSString *shareEtag; // ivar: _shareEtag
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // ivar: _shareIDUpdate
@property (retain, nonatomic) NSString *zoneProtectionInfoTag; // ivar: _zoneProtectionInfoTag


+(Class)conflictLosersToResolveType;
+(Class)fieldsToDeleteIfExistOnMergeType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)conflictLosersToResolveAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldsToDeleteIfExistOnMergeAtIndex:(NSUInteger)arg0 ;
-(id)saveSemanticsAsString:(int)arg0 ;
-(int)StringAsSaveSemantics:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addConflictLosersToResolve:(id)arg0 ;
-(void)addFieldsToDeleteIfExistOnMerge:(id)arg0 ;
-(void)clearConflictLosersToResolves;
-(void)clearFieldsToDeleteIfExistOnMerges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif