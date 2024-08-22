// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRGAMECONTROLLERDELAYEDEVENT_H
#define MRGAMECONTROLLERDELAYEDEVENT_H


#import <Foundation/Foundation.h>


@interface MRGameControllerDelayedEvent : NSObject

@property (nonatomic) NSUInteger lastDownEvent; // ivar: _lastDownEvent
@property (copy, nonatomic) id *sendEventBlock; // ivar: _sendEventBlock


-(void)send;


@end


#endif