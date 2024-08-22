// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEHEURISTICCLASSIFIERGUARDEDDATA_H
#define ATXMODEHEURISTICCLASSIFIERGUARDEDDATA_H

@class NSDate, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ATXModeFeatureSet.h"

@interface ATXModeHeuristicClassifierGuardedData : NSObject {
    ATXModeFeatureSet *_aggregateFeatures;
    NSDate *_lastFeatureUpdateDate;
    NSMutableArray *_featureBuffer;
    NSUInteger _mode;
}






@end


#endif