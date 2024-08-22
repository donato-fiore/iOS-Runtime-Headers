// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCLIENTMETRICS_H
#define GEOCLIENTMETRICS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOClientNetworkMetrics.h"

@interface GEOClientMetrics : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    CGFloat _queuedTime;
    int _responseSource;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasNetworkMetrics;
@property (nonatomic) BOOL hasQueuedTime;
@property (nonatomic) BOOL hasResponseSource;
@property (retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) CGFloat queuedTime;
@property (nonatomic) int responseSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)responseSourceAsString:(int)arg0 ;
-(int)StringAsResponseSource:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif