// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSETUPEARLYEXITEVENT_H
#define MSSETUPEARLYEXITEVENT_H

@class NSString;


#import "MSBaseSetupEvent.h"

@interface MSSetupEarlyExitEvent : MSBaseSetupEvent

@property (nonatomic) BOOL didEncounterError; // ivar: _didEncounterError
@property (retain, nonatomic) NSString *exitReason; // ivar: _exitReason
@property (retain, nonatomic) NSString *serviceID; // ivar: _serviceID


-(id)encoded;
-(id)initWithExitReason:(id)arg0 didEncounterError:(BOOL)arg1 ;


@end


#endif