// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESUMMARYMEANSHIFTTRENDUSERDATA_H
#define HKCODABLESUMMARYMEANSHIFTTRENDUSERDATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "HKCodableSummaryVisualizationPoint.h"

@interface HKCodableSummaryMeanShiftTrendUserData : PBCodable <NSCopying>

 {
    APPLE_145 _has;
}


@property (retain, nonatomic) HKCodableSummaryVisualizationPoint *baselineVisualization; // ivar: _baselineVisualization
@property (retain, nonatomic) NSString *changeTypeRawValue; // ivar: _changeTypeRawValue
@property (retain, nonatomic) HKCodableSummaryVisualizationPoint *changeVisualization; // ivar: _changeVisualization
@property (retain, nonatomic) NSString *coveredDateRangeRawValue; // ivar: _coveredDateRangeRawValue
@property (nonatomic) int diagramStyle; // ivar: _diagramStyle
@property (nonatomic) CGFloat discoveryDateData; // ivar: _discoveryDateData
@property (readonly, nonatomic) BOOL hasBaselineVisualization;
@property (readonly, nonatomic) BOOL hasChangeTypeRawValue;
@property (readonly, nonatomic) BOOL hasChangeVisualization;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (nonatomic) BOOL hasDiagramStyle;
@property (nonatomic) BOOL hasDiscoveryDateData;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (readonly, nonatomic) BOOL hasTrendPrimaryShortText;
@property (readonly, nonatomic) BOOL hasTrendPrimaryText;
@property (readonly, nonatomic) BOOL hasTrendPrimaryTextSharingPreviewOverride;
@property (retain, nonatomic) NSString *notificationIdentifier; // ivar: _notificationIdentifier
@property (retain, nonatomic) NSString *objectTypeIdentifier; // ivar: _objectTypeIdentifier
@property (retain, nonatomic) NSString *trendPrimaryShortText; // ivar: _trendPrimaryShortText
@property (retain, nonatomic) NSString *trendPrimaryText; // ivar: _trendPrimaryText
@property (retain, nonatomic) NSString *trendPrimaryTextSharingPreviewOverride; // ivar: _trendPrimaryTextSharingPreviewOverride
@property (retain, nonatomic) NSMutableArray *visualizationPoints; // ivar: _visualizationPoints


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diagramStyleAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)visualizationPointsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDiagramStyle:(id)arg0 ;
-(void)addVisualizationPoints:(id)arg0 ;
-(void)clearVisualizationPoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif