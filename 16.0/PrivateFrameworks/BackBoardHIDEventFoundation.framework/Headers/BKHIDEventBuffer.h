// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTBUFFER_H
#define BKHIDEVENTBUFFER_H

@class NSMutableArray, NSSet, NSString, BKSHIDEventDispatchingTarget;
@protocol BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface BKHIDEventBuffer : NSObject <BSDescriptionStreamable>

 {
    NSMutableArray *_buffer;
}


@property (nonatomic) BOOL allBufferingClientsTerminated; // ivar: _allBufferingClientsTerminated
@property (retain, nonatomic) NSSet *bufferingPIDs; // ivar: _bufferingPIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *dispatchTarget; // ivar: _dispatchTarget
@property (readonly, nonatomic) BOOL hasEvents;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_test_peekAllEvents;
-(id)_test_peekAllIOHIDEvents;
-(id)drainAllEvents;
-(id)initWithDispatchTarget:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)appendEvent:(struct __IOHIDEvent *)arg0 sender:(id)arg1 sequence:(id)arg2 additionalContext:(id)arg3 ;


@end


#endif