// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPREALTIMEMESSAGE_H
#define CKDPREALTIMEMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPRealTimeMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *associatedMergeableDeltas; // ivar: _associatedMergeableDeltas
@property (retain, nonatomic) NSMutableArray *deleteRecordids; // ivar: _deleteRecordids
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *saveRecords; // ivar: _saveRecords
@property (nonatomic) int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)associatedMergeableDeltasAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteRecordidsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)saveRecordsAtIndex:(NSUInteger)arg0 ;
-(void)addAssociatedMergeableDeltas:(id)arg0 ;
-(void)addDeleteRecordids:(id)arg0 ;
-(void)addSaveRecords:(id)arg0 ;
-(void)clearAssociatedMergeableDeltas;
-(void)clearDeleteRecordids;
-(void)clearSaveRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif