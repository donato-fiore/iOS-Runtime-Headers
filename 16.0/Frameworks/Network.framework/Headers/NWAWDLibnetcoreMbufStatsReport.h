// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDLIBNETCOREMBUFSTATSREPORT_H
#define NWAWDLIBNETCOREMBUFSTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreMbufStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMbuf16KBTotal;
@property (nonatomic) BOOL hasMbuf256BTotal;
@property (nonatomic) BOOL hasMbuf2KBTotal;
@property (nonatomic) BOOL hasMbuf4KBTotal;
@property (nonatomic) BOOL hasMbufDrainCount;
@property (nonatomic) BOOL hasMbufMemReleased;
@property (nonatomic) BOOL hasSockAtMBLimit;
@property (nonatomic) BOOL hasSockMBcnt;
@property (nonatomic) NSUInteger mbuf16KBTotal; // ivar: _mbuf16KBTotal
@property (nonatomic) NSUInteger mbuf256BTotal; // ivar: _mbuf256BTotal
@property (nonatomic) NSUInteger mbuf2KBTotal; // ivar: _mbuf2KBTotal
@property (nonatomic) NSUInteger mbuf4KBTotal; // ivar: _mbuf4KBTotal
@property (nonatomic) NSUInteger mbufDrainCount; // ivar: _mbufDrainCount
@property (nonatomic) NSUInteger mbufMemReleased; // ivar: _mbufMemReleased
@property (nonatomic) NSUInteger sockAtMBLimit; // ivar: _sockAtMBLimit
@property (nonatomic) NSUInteger sockMBcnt; // ivar: _sockMBcnt


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif