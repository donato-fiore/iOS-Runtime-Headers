// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCOPERATIONNOTIFICATIONRETRYSIGNAL_H
#define FCOPERATIONNOTIFICATIONRETRYSIGNAL_H

@class NSString;
@protocol FCOperationRetrySignal, OS_dispatch_group, NSObject;

#import <Foundation/Foundation.h>


@interface FCOperationNotificationRetrySignal : NSObject <FCOperationRetrySignal>

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