// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCHIDEVENTSUBJECT_H
#define _GCHIDEVENTSUBJECT_H

@class NSDictionary, NSString;
@protocol _GCHIDEventSource;

#import <Foundation/Foundation.h>


@interface _GCHIDEventSubject : NSObject <_GCHIDEventSource>

 {
    os_unfair_lock_s _lock;
    NSDictionary *_handlersByService;
    uint8_t _stopped;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isStopped) BOOL stopped;
@property (readonly) Class superclass;


-(id)init;
-(id)observeHIDEvents:(id)arg0 ;
// -(id)observeHIDEvents:(id)arg0 forService:(unk)arg1  ;
-(void)publishHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif