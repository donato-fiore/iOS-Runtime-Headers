// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI23MEDICALRECORDCHARTPOINT_H
#define _TTC15HEALTHRECORDSUI23MEDICALRECORDCHARTPOINT_H

@class NSString;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI23MedicalRecordChartPoint : NSObject <HKChartPoint>

 {
    ? chartableSet;
    ? blockCoordinateInfo;
    ? sortedYValues;
}


@property (nonatomic, readonly) NSString *description;


-(id)allYValues;
-(id)init;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif