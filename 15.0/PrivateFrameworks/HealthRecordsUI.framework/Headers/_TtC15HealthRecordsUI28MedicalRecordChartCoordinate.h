// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI28MEDICALRECORDCHARTCOORDINATE_H
#define _TTC15HEALTHRECORDSUI28MEDICALRECORDCHARTCOORDINATE_H

@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI28MedicalRecordChartCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

 {
    ? pointValuesAscending;
    ? blockCoordinateInfo;
}


@property (nonatomic, readonly) CGFloat endXValue;
@property (nonatomic, readonly) CGFloat startXValue;
@property (nonatomic, readonly) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo;


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)init;


@end


#endif