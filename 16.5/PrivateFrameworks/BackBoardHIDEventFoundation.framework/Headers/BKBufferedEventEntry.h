// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKBUFFEREDEVENTENTRY_H
#define BKBUFFEREDEVENTENTRY_H

@class NSString;
@protocol BSInvalidatable, BKHIDEventSenderInfo;

#import <Foundation/Foundation.h>

#import "BKHIDEventDeliverySequence.h"

@interface BKBufferedEventEntry : NSObject <BSInvalidatable>

 {
    id *_rawEvent;
}


@property (retain, nonatomic) id *additionalContext; // ivar: _additionalContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BKHIDEventSenderInfo> *sender; // ivar: _sender
@property (retain, nonatomic) BKHIDEventDeliverySequence *sequence; // ivar: _sequence
@property (readonly) Class superclass;


-(struct __IOHIDEvent *)event;
-(void)invalidate;
-(void)setEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif