// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDLIBNETCORENETWORKDSTATSREPORT_H
#define NWAWDLIBNETCORENETWORKDSTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger fallbackConnectionCount; // ivar: _fallbackConnectionCount
@property (nonatomic) BOOL hasFallbackConnectionCount;
@property (nonatomic) BOOL hasTotalConnectionCount;
@property (nonatomic) BOOL hasTotalSuccessfulConnectionCount;
@property (nonatomic) NSUInteger totalConnectionCount; // ivar: _totalConnectionCount
@property (nonatomic) NSUInteger totalSuccessfulConnectionCount; // ivar: _totalSuccessfulConnectionCount


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