// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKBUFFEREDEVENTENTRY_H
#define BKBUFFEREDEVENTENTRY_H

@protocol BKHIDEventSenderInfo;

#import <Foundation/Foundation.h>

#import "BKHIDEventDeliverySequence.h"

@interface BKBufferedEventEntry : NSObject {
    id *_rawEvent;
}


@property (retain, nonatomic) id *additionalContext; // ivar: _additionalContext
@property (retain, nonatomic) NSObject<BKHIDEventSenderInfo> *sender; // ivar: _sender
@property (retain, nonatomic) BKHIDEventDeliverySequence *sequence; // ivar: _sequence


-(struct __IOHIDEvent *)event;
-(void)setEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif