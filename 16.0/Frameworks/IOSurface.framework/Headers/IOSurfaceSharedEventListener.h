// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACESHAREDEVENTLISTENER_H
#define IOSURFACESHAREDEVENTLISTENER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IOSurfaceSharedEventListener : NSObject {
    *IONotificationPort _notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)dealloc;


@end


#endif