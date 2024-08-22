// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBNETWORKMETRICS_H
#define NTPBNETWORKMETRICS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBNetworkMetrics : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *failures; // ivar: _failures
@property (retain, nonatomic) NSMutableArray *successes; // ivar: _successes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failuresAtIndex:(NSUInteger)arg0 ;
-(id)successesAtIndex:(NSUInteger)arg0 ;
-(void)addFailures:(id)arg0 ;
-(void)addSuccesses:(id)arg0 ;
-(void)clearFailures;
-(void)clearSuccesses;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif