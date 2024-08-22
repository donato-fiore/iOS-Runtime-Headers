// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDNWACCUMULATOR_H
#define NWAWDNWACCUMULATOR_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NWAWDNWAccumulator : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *durations; // ivar: _durations
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)durationsAtIndex:(NSUInteger)arg0 ;
-(void)addDurations:(id)arg0 ;
-(void)clearDurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif