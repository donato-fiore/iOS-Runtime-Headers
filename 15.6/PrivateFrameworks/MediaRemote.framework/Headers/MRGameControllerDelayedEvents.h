// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRGAMECONTROLLERDELAYEDEVENTS_H
#define MRGAMECONTROLLERDELAYEDEVENTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRGameControllerDelayedEvents : NSObject {
    NSMutableDictionary *_events;
}




-(id)eventForController:(NSUInteger)arg0 element:(int)arg1 ;
-(void)invokeEventsForController:(NSUInteger)arg0 beacuseElement:(int)arg1 ;


@end


#endif