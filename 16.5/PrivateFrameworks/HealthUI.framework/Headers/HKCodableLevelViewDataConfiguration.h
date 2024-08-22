// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLELEVELVIEWDATACONFIGURATION_H
#define HKCODABLELEVELVIEWDATACONFIGURATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableLevelViewDataConfiguration : PBCodable <NSCopying>



@property (nonatomic) CGFloat normalizedValue; // ivar: _normalizedValue
@property (retain, nonatomic) NSMutableArray *sortedNormalizedBuckets; // ivar: _sortedNormalizedBuckets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sortedNormalizedBucketsAtIndex:(NSUInteger)arg0 ;
-(void)addSortedNormalizedBuckets:(id)arg0 ;
-(void)clearSortedNormalizedBuckets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif