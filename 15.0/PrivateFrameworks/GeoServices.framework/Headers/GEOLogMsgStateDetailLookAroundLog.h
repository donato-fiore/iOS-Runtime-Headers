// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEDETAILLOOKAROUNDLOG_H
#define GEOLOGMSGSTATEDETAILLOOKAROUNDLOG_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _durationSec;
    NSMutableArray *_lookAroundPipRecords;
    NSMutableArray *_lookAroundViewRecords;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _poisShown;
    ? _flags;
}


@property (nonatomic) CGFloat durationSec;
@property (nonatomic) BOOL hasDurationSec;
@property (nonatomic) BOOL hasPoisShown;
@property (retain, nonatomic) NSMutableArray *lookAroundPipRecords;
@property (retain, nonatomic) NSMutableArray *lookAroundViewRecords;
@property (nonatomic) unsigned int poisShown;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)lookAroundPipRecordsAtIndex:(NSUInteger)arg0 ;
-(id)lookAroundViewRecordsAtIndex:(NSUInteger)arg0 ;
-(void)addLookAroundPipRecords:(id)arg0 ;
-(void)addLookAroundViewRecords:(id)arg0 ;
-(void)clearLookAroundPipRecords;
-(void)clearLookAroundViewRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif