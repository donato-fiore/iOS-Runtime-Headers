// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEMODELFITTINGMINIBATCHSTATS_H
#define AWDPROACTIVEMODELFITTINGMINIBATCHSTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) BOOL hasBatchSize;
@property (nonatomic) BOOL hasSupport;
@property (retain, nonatomic) NSMutableArray *perLabelSupports; // ivar: _perLabelSupports
@property (nonatomic) float support; // ivar: _support


+(Class)perLabelSupportType;
+(id)statsWithPerLabelCounts:(id)arg0 ;
+(id)statsWithSize:(NSUInteger)arg0 support:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)supportForLabel:(NSUInteger)arg0 ;
-(id)combineWithStats:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)perLabelSupportAtIndex:(NSUInteger)arg0 ;
-(id)toDictionary;
-(void)addPerLabelSupport:(id)arg0 ;
-(void)clearPerLabelSupports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif