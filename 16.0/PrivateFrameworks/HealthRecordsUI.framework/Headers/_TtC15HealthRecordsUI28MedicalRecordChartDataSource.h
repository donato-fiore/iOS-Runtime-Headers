// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI28MEDICALRECORDCHARTDATASOURCE_H
#define _TTC15HEALTHRECORDSUI28MEDICALRECORDCHARTDATASOURCE_H

@class HKGraphSeriesDataSource, NSString;



@interface _TtC15HealthRecordsUI28MedicalRecordChartDataSource : HKGraphSeriesDataSource {
    ? type;
    ? chartDefining;
    ? dataTransformer;
    ? chartableCodedQuantitySets;
    ? cachedBucketedSets;
    ? collapseIntoRangePoints;
    ? unit;
    ? preferredColors;
    ? chartableXRange;
    ? chartableYRange;
}


@property (nonatomic, readonly) NSString *displayName;


-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)chartDisplayTypeWithVerticalAxis:(id)arg0 ;
-(id)init;
-(id)initWithConcept:(id)arg0 dataTransformer:(id)arg1 unit:(id)arg2 preferredColors:(id)arg3 collapseIntoRangePoints:(BOOL)arg4 type:(NSInteger)arg5 ;


@end


#endif