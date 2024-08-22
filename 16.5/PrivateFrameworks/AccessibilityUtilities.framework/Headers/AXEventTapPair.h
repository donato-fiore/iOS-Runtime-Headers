// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXEVENTTAPPAIR_H
#define AXEVENTTAPPAIR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXEventTapPair : NSObject

@property (copy, nonatomic) id *failedToHandleInTime; // ivar: _failedToHandleInTime
@property (copy, nonatomic) id *handler; // ivar: handler
@property (copy, nonatomic) NSString *identifier; // ivar: identifier
@property (copy, nonatomic) id *matchingServiceHandler; // ivar: _matchingServiceHandler
@property (nonatomic) int priority; // ivar: priority
@property (retain, nonatomic) *__IOHIDEventSystemClient systemClient; // ivar: _systemClient
@property (nonatomic) int type; // ivar: _type


-(id)description;
-(void)dealloc;


@end


#endif