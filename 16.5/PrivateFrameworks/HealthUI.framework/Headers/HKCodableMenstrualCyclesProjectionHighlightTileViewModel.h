// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEMENSTRUALCYCLESPROJECTIONHIGHLIGHTTILEVIEWMODEL_H
#define HKCODABLEMENSTRUALCYCLESPROJECTIONHIGHLIGHTTILEVIEWMODEL_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableMenstrualCyclesProjection.h"
#import "HKCodableMenstrualCyclesProjectionKind.h"

@interface HKCodableMenstrualCyclesProjectionHighlightTileViewModel : PBCodable <NSCopying>

 {
    APPLE_140 _has;
}


@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasProjection;
@property (readonly, nonatomic) BOOL hasProjectionKind;
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) HKCodableMenstrualCyclesProjection *projection; // ivar: _projection
@property (retain, nonatomic) HKCodableMenstrualCyclesProjectionKind *projectionKind; // ivar: _projectionKind


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