// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROTECTEDCORRELATEDEVENTSDATA_H
#define ATXPROTECTEDCORRELATEDEVENTSDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXProtectedCorrelatedEventsData : NSObject {
    NSMutableArray *correlatedEvents;
    NSUInteger typeBEventDataReturnIndex;
    BOOL canUpdateReturnIndex;
    BOOL executedCorrelation;
}






@end


#endif