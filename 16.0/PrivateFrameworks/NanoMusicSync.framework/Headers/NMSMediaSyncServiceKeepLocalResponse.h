// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCSERVICEKEEPLOCALRESPONSE_H
#define NMSMEDIASYNCSERVICEKEEPLOCALRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface NMSMediaSyncServiceKeepLocalResponse : PBCodable <NSCopying>

 {
    ? _results;
}


@property (readonly, nonatomic) *int results;
@property (readonly, nonatomic) NSUInteger resultsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resultsAsString:(int)arg0 ;
-(int)StringAsResults:(id)arg0 ;
-(int)resultAtIndex:(NSUInteger)arg0 ;
-(void)addResult:(int)arg0 ;
-(void)clearResults;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif