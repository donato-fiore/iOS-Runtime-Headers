// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEELECTROCARDIOGRAMDATASOURCEQUERYDATA_H
#define HKCODABLEELECTROCARDIOGRAMDATASOURCEQUERYDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableElectrocardiogramDataSourceQueryData : PBCodable <NSCopying>

 {
    APPLE_143 _has;
}


@property (nonatomic) NSInteger activeAlgorithmVersionRawValue; // ivar: _activeAlgorithmVersionRawValue
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL hasActiveAlgorithmVersionRawValue;
@property (nonatomic) BOOL hasCount;
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