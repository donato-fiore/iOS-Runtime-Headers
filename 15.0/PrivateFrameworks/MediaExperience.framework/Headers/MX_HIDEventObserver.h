// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MX_HIDEVENTOBSERVER_H
#define MX_HIDEVENTOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MX_HIDEventObserver : NSObject {
    *__IOHIDEventSystemClient mHIDClient;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (nonatomic) BOOL smartCoverClosed; // ivar: _smartCoverClosed


-(id)init;
-(void)dealloc;
-(void)handleButtonEvent:(struct __IOHIDEvent *)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif