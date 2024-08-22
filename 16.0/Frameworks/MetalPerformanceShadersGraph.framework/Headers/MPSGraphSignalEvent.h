// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSIGNALEVENT_H
#define MPSGRAPHSIGNALEVENT_H

@protocol MTLSharedEvent;

#import <Foundation/Foundation.h>


@interface MPSGraphSignalEvent : NSObject {
    id<MTLSharedEvent> *_event;
    NSUInteger _executionStage;
    NSUInteger _value;
}




-(id)initWithEvent:(id)arg0 executionStage:(NSUInteger)arg1 value:(NSUInteger)arg2 ;


@end


#endif