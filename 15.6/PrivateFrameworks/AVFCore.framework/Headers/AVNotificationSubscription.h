// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVNOTIFICATIONSUBSCRIPTION_H
#define AVNOTIFICATIONSUBSCRIPTION_H

@class NSString;
@protocol AVCancellable;

#import <Foundation/Foundation.h>


@interface AVNotificationSubscription : NSObject <AVCancellable>

 {
    NSObject *_object;
    id *_observerToken;
    id *_callback;
    *OpaqueFigSimpleMutex _cancelMutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObject:(id)arg0 notificationName:(id)arg1 callbackBlock:(id)arg2 ;
-(void)cancel;
-(void)dealloc;


@end


#endif