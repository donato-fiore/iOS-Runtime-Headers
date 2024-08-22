// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESUMMARYAUDIOGRAMVALUE_H
#define HKCODABLESUMMARYAUDIOGRAMVALUE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableSummaryAudiogramValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HKCodableQuantity *averageLeftEarSensitivity; // ivar: _averageLeftEarSensitivity
@property (retain, nonatomic) HKCodableQuantity *averageRightEarSensitivity; // ivar: _averageRightEarSensitivity
@property (nonatomic) NSInteger diagnostic; // ivar: _diagnostic
@property (readonly, nonatomic) BOOL hasAverageLeftEarSensitivity;
@property (readonly, nonatomic) BOOL hasAverageRightEarSensitivity;
@property (nonatomic) BOOL hasDiagnostic;
@property (readonly, nonatomic) BOOL hasMaximumSensitivity;
@property (readonly, nonatomic) BOOL hasMinimumSensitivity;
@property (nonatomic) BOOL hasTimestampData;
@property (retain, nonatomic) HKCodableQuantity *maximumSensitivity; // ivar: _maximumSensitivity
@property (retain, nonatomic) HKCodableQuantity *minimumSensitivity; // ivar: _minimumSensitivity
@property (retain, nonatomic) NSMutableArray *sensitivityPoints; // ivar: _sensitivityPoints
@property (nonatomic) CGFloat timestampData; // ivar: _timestampData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sensitivityPointsAtIndex:(NSUInteger)arg0 ;
-(void)addSensitivityPoints:(id)arg0 ;
-(void)clearSensitivityPoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif