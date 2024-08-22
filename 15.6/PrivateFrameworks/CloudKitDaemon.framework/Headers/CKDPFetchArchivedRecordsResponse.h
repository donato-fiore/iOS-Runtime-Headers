// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPFETCHARCHIVEDRECORDSRESPONSE_H
#define CKDPFETCHARCHIVEDRECORDSRESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *archiveContinuationToken; // ivar: _archiveContinuationToken
@property (readonly, nonatomic) BOOL hasArchiveContinuationToken;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (nonatomic) int status; // ivar: _status


+(Class)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)clearRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif