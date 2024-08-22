// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBSTATUSREGISTRATIONEVENT_H
#define PLBACKGROUNDJOBSTATUSREGISTRATIONEVENT_H

@class NSString, NSArray;


#import "PLBackgroundJobStatusEvent.h"

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property BOOL registeredActivity; // ivar: _registeredActivity
@property (retain) NSString *registeredPriorities; // ivar: _registeredPriorities
@property (retain) NSArray *workersResponsible; // ivar: _workersResponsible


-(id)statusDump;


@end


#endif