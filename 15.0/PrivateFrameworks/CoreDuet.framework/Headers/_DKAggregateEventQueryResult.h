// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKAGGREGATEEVENTQUERYRESULT_H
#define _DKAGGREGATEEVENTQUERYRESULT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_DKEventQuery.h"

@interface _DKAggregateEventQueryResult : NSObject {
    _DKEventQuery *_query;
    NSMutableArray *_mutableEvents;
    NSMutableArray *_mutableErrors;
    NSUInteger _numberOfContributions;
}






@end


#endif