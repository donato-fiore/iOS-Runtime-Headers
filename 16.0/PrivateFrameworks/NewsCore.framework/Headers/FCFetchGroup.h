// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFETCHGROUP_H
#define FCFETCHGROUP_H

@class NSSet, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCFetchGroup : NSObject {
    BOOL _shouldFilter;
    BOOL _isUserFacing;
    NSSet *_keys;
    id *_context;
    NSInteger _qualityOfService;
    NSInteger _relativePriority;
    NSUInteger _numberOfFetchAttempts;
}


@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate


-(NSInteger)comparePriority:(id)arg0 ;


@end


#endif