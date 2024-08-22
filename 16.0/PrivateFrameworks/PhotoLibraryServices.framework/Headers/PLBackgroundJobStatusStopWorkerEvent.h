// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSTATUSSTOPWORKEREVENT_H
#define PLBACKGROUNDJOBSTATUSSTOPWORKEREVENT_H

@class NSString;


#import "PLBackgroundJobStatusEvent.h"

@interface PLBackgroundJobStatusStopWorkerEvent : PLBackgroundJobStatusEvent

@property NSUInteger pendingJobsCount; // ivar: _pendingJobsCount
@property (retain) NSString *worker; // ivar: _worker


-(id)statusDump;


@end


#endif