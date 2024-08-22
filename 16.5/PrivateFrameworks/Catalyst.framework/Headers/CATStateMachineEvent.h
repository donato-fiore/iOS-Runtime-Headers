// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATSTATEMACHINEEVENT_H
#define CATSTATEMACHINEEVENT_H


#import <Foundation/Foundation.h>


@interface CATStateMachineEvent : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) id *trigger; // ivar: _trigger


+(id)eventWithTrigger:(id)arg0 context:(id)arg1 ;
-(id)description;
-(id)initWithEventTrigger:(id)arg0 context:(id)arg1 ;


@end


#endif