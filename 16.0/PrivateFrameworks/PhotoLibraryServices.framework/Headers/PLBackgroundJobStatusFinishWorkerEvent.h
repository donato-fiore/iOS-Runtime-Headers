// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSTATUSFINISHWORKEREVENT_H
#define PLBACKGROUNDJOBSTATUSFINISHWORKEREVENT_H

@class NSString;


#import "PLBackgroundJobStatusEvent.h"

@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker; // ivar: _worker


-(id)statusDump;


@end


#endif