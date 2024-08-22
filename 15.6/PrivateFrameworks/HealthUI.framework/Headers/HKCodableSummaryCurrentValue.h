// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESUMMARYCURRENTVALUE_H
#define HKCODABLESUMMARYCURRENTVALUE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "HKCodableMetadataDictionary.h"
#import "HKCodableSummarySupplementaryValue.h"

@interface HKCodableSummaryCurrentValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKindRawValue;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasQueryConfigurationData;
@property (readonly, nonatomic) BOOL hasSupplementaryValue;
@property (readonly, nonatomic) BOOL hasValueData;
@property (retain, nonatomic) NSString *kindRawValue; // ivar: _kindRawValue
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) NSData *queryConfigurationData; // ivar: _queryConfigurationData
@property (retain, nonatomic) HKCodableSummarySupplementaryValue *supplementaryValue; // ivar: _supplementaryValue
@property (retain, nonatomic) NSData *valueData; // ivar: _valueData


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