// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBABCONFIG_H
#define NTPBABCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBConfig.h"

@interface NTPBABConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *configBuckets; // ivar: _configBuckets
@property (retain, nonatomic) NTPBConfig *configControl; // ivar: _configControl
@property (readonly, nonatomic) BOOL hasConfigControl;
@property (nonatomic) BOOL hasPopulationCeiling;
@property (nonatomic) BOOL hasPopulationFloor;
@property (nonatomic) NSInteger populationCeiling; // ivar: _populationCeiling
@property (nonatomic) NSInteger populationFloor; // ivar: _populationFloor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configBucketsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConfigBuckets:(id)arg0 ;
-(void)clearConfigBuckets;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif