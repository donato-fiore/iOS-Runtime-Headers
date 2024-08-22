// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCOPERATIONNOTIFICATIONRETRYSIGNAL_H
#define RCOPERATIONNOTIFICATIONRETRYSIGNAL_H

@class NSString;
@protocol RCOperationRetrySignal, OS_dispatch_group, NSObject;

#import <Foundation/Foundation.h>


@interface RCOperationNotificationRetrySignal : NSObject <RCOperationRetrySignal>

 {
    NSObject<OS_dispatch_group> *_group;
    NSUInteger _timeoutTime;
    id<NSObject> *_notificationObserver;
    NSString *_notificationName;
    CGFloat _timeout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNotificationName:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)onQueue:(id)arg0 signal:(id)arg1 ;


@end


#endif