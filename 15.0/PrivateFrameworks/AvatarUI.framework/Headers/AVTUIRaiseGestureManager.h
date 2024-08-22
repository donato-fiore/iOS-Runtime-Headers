// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTUIRAISEGESTUREMANAGER_H
#define AVTUIRAISEGESTUREMANAGER_H

@class NSString, CMWakeGestureManager;
@protocol CMWakeGestureDelegate, OS_dispatch_queue, AVTUIRaiseGestureManagerDelegate;

#import <Foundation/Foundation.h>


@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTUIRaiseGestureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CMWakeGestureManager *wakeGestureManager; // ivar: _wakeGestureManager


-(id)init;
-(id)initWithBackingWakeGestureManager:(id)arg0 callbackQueue:(id)arg1 ;
-(void)dealloc;
-(void)startRaiseGestureUpdates;
-(void)stopRaiseGestureUpdates;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif