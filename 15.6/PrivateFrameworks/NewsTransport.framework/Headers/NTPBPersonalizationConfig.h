// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBPERSONALIZATIONCONFIG_H
#define NTPBPERSONALIZATIONCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBBinningConfig.h"
#import "NTPBPersonalizationTreatment.h"

@interface NTPBPersonalizationConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBBinningConfig *binningConfig; // ivar: _binningConfig
@property (retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment; // ivar: _defaultPersonalizationTreatment
@property (readonly, nonatomic) BOOL hasBinningConfig;
@property (readonly, nonatomic) BOOL hasDefaultPersonalizationTreatment;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) NSInteger moduloForHashing; // ivar: _moduloForHashing
@property (retain, nonatomic) NSMutableArray *personalizationBuckets; // ivar: _personalizationBuckets
@property (retain, nonatomic) NSMutableArray *personalizationTreatments; // ivar: _personalizationTreatments


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)personalizationBucketsAtIndex:(NSUInteger)arg0 ;
-(id)personalizationTreatmentsAtIndex:(NSUInteger)arg0 ;
-(void)addPersonalizationBuckets:(id)arg0 ;
-(void)addPersonalizationTreatments:(id)arg0 ;
-(void)clearPersonalizationBuckets;
-(void)clearPersonalizationTreatments;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif