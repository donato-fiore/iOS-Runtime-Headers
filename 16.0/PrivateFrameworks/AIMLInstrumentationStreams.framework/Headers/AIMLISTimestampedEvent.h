// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISTIMESTAMPEDEVENT_H
#define AIMLISTIMESTAMPEDEVENT_H

@class SIOrderedEvent;

#import <Foundation/Foundation.h>


@interface AIMLISTimestampedEvent : NSObject

@property (nonatomic, readonly) SIOrderedEvent *orderedEvent; // ivar: orderedEvent
@property (nonatomic, readonly) CGFloat timestamp; // ivar: timestamp


-(id)init;


@end


#endif