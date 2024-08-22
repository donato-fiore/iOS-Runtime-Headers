// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFBLUETOOTHWIRELESSSPLITTERSESSIONSTATEOBSERVER_H
#define AFBLUETOOTHWIRELESSSPLITTERSESSIONSTATEOBSERVER_H

@class NSString;
@protocol AFNotifyObserverDelegate, AFInvalidating, OS_dispatch_queue, AFBluetoothWirelessSplitterSessionStateObserverDelegate;

#import <Foundation/Foundation.h>

#import "AFNotifyObserver.h"

@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFBluetoothWirelessSplitterSessionStateObserverDelegate> *_delegate;
    AFNotifyObserver *_notifyObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_invalidate;
-(void)dealloc;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;


@end


#endif