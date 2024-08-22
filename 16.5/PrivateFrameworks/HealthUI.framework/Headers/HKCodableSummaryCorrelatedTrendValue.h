// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYCORRELATEDTRENDVALUE_H
#define HKCODABLESUMMARYCORRELATEDTRENDVALUE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HKCodableSummaryTrendValue.h"

@interface HKCodableSummaryCorrelatedTrendValue : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (readonly, nonatomic) BOOL hasTrendValue;
@property (retain, nonatomic) NSString *objectTypeIdentifier; // ivar: _objectTypeIdentifier
@property (retain, nonatomic) HKCodableSummaryTrendValue *trendValue; // ivar: _trendValue


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