// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBSTATUSSTARTWORKEREVENT_H
#define PLBACKGROUNDJOBSTATUSSTARTWORKEREVENT_H

@class NSString;


#import "PLBackgroundJobStatusEvent.h"

@interface PLBackgroundJobStatusStartWorkerEvent : PLBackgroundJobStatusEvent

@property NSUInteger jobsCount; // ivar: _jobsCount
@property (retain) NSString *worker; // ivar: _worker


-(id)statusDump;


@end


#endif