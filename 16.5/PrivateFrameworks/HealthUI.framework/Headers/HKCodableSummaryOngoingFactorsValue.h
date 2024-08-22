// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYONGOINGFACTORSVALUE_H
#define HKCODABLESUMMARYONGOINGFACTORSVALUE_H

@class PBCodable;
@protocol NSCopying;



@interface HKCodableSummaryOngoingFactorsValue : PBCodable <NSCopying>

 {
    ? _categoryValueRawValues;
    APPLE_116 _has;
}


@property (readonly, nonatomic) *NSInteger categoryValueRawValues;
@property (readonly, nonatomic) NSUInteger categoryValueRawValuesCount;
@property (nonatomic) CGFloat earliestStartDate; // ivar: _earliestStartDate
@property (nonatomic) BOOL hasEarliestStartDate;
@property (nonatomic) BOOL hasLatestEndDate;
@property (nonatomic) CGFloat latestEndDate; // ivar: _latestEndDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)categoryValueRawValuesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCategoryValueRawValues:(NSInteger)arg0 ;
-(void)clearCategoryValueRawValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif