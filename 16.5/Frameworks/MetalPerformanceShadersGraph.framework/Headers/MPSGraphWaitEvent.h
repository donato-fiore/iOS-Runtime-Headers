// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHWAITEVENT_H
#define MPSGRAPHWAITEVENT_H

@protocol MTLSharedEvent;

#import <Foundation/Foundation.h>


@interface MPSGraphWaitEvent : NSObject {
    id<MTLSharedEvent> *_event;
    NSUInteger _value;
}




-(id)initWithEvent:(id)arg0 value:(NSUInteger)arg1 ;


@end


#endif