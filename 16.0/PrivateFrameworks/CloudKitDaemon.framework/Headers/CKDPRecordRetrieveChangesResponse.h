// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDRETRIEVECHANGESRESPONSE_H
#define CKDPRECORDRETRIEVECHANGESRESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *changedDeltas; // ivar: _changedDeltas
@property (retain, nonatomic) NSMutableArray *changedRecords; // ivar: _changedRecords
@property (retain, nonatomic) NSMutableArray *changedShares; // ivar: _changedShares
@property (retain, nonatomic) NSData *clientChangeToken; // ivar: _clientChangeToken
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (nonatomic) BOOL hasPendingArchivedRecords;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (nonatomic) BOOL pendingArchivedRecords; // ivar: _pendingArchivedRecords
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSData *syncContinuationToken; // ivar: _syncContinuationToken
@property (retain, nonatomic) NSMutableArray *syncObligations; // ivar: _syncObligations


+(Class)changedRecordType;
+(Class)changedShareType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changedDeltasAtIndex:(NSUInteger)arg0 ;
-(id)changedRecordAtIndex:(NSUInteger)arg0 ;
-(id)changedShareAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(id)syncObligationsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addChangedDeltas:(id)arg0 ;
-(void)addChangedRecord:(id)arg0 ;
-(void)addChangedShare:(id)arg0 ;
-(void)addSyncObligations:(id)arg0 ;
-(void)clearChangedDeltas;
-(void)clearChangedRecords;
-(void)clearChangedShares;
-(void)clearSyncObligations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif