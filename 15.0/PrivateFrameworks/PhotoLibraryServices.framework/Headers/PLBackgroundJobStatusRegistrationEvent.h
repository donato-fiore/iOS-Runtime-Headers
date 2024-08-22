// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBACKGROUNDJOBSTATUSREGISTRATIONEVENT_H
#define PLBACKGROUNDJOBSTATUSREGISTRATIONEVENT_H

@class NSArray;


#import "PLBackgroundJobStatusEvent.h"

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property BOOL registeredActivity; // ivar: _registeredActivity
@property NSInteger registeredPriority; // ivar: _registeredPriority
@property (retain) NSArray *workersResponsible; // ivar: _workersResponsible


-(id)statusDump;


@end


#endif