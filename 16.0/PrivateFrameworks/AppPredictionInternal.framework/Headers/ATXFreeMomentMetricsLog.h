// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFREEMOMENTMETRICSLOG_H
#define ATXFREEMOMENTMETRICSLOG_H


#import <Foundation/Foundation.h>

#import "ATXFreeMomentDataCollectionPBFreeMomentLogEntry.h"

@interface ATXFreeMomentMetricsLog : NSObject {
    ATXFreeMomentDataCollectionPBFreeMomentLogEntry *_metric;
}




-(id)getPBCodable;
-(id)initWithFeatureVector:(id)arg0 freeMomentReason:(id)arg1 userResponse:(BOOL)arg2 userFeedback:(id)arg3 isStaleNotification:(BOOL)arg4 ;


@end


#endif