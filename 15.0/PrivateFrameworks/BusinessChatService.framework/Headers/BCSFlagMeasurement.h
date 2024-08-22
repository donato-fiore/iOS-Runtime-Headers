// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSFLAGMEASUREMENT_H
#define BCSFLAGMEASUREMENT_H

@class NSArray;


#import "BCSMeasurement.h"

@interface BCSFlagMeasurement : BCSMeasurement {
    BOOL _flagWasSet;
    NSArray *_realTimeMeasurementHandlers;
}


@property (nonatomic) BOOL flag; // ivar: _flag
@property (readonly, nonatomic) NSInteger flagMeasurementType; // ivar: _flagMeasurementType


+(id)newFlagMeasurement:(NSInteger)arg0 withHandlers:(id)arg1 ;


@end


#endif