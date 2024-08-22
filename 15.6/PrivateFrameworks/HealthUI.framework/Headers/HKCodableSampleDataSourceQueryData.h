// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESAMPLEDATASOURCEQUERYDATA_H
#define HKCODABLESAMPLEDATASOURCEQUERYDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableSampleDataSourceQueryData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *samples; // ivar: _samples


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)samplesAtIndex:(NSUInteger)arg0 ;
-(void)addSamples:(id)arg0 ;
-(void)clearSamples;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif