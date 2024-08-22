// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDSTATISTICSCOLLECTIONQUERYPENDINGSERIES_H
#define _HDSTATISTICSCOLLECTIONQUERYPENDINGSERIES_H

@class HKQuantitySample, NSNumber, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {
    HKQuantitySample *_series;
    NSNumber *_anchor;
    NSMutableArray *_quantities;
}






@end


#endif