// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WRM_UCMINTERFACE_H
#define WRM_UCMINTERFACE_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WRM_UCMInterface : NSObject {
    id *mBtConnectedLinksObserver;
    id *mNotificationBlock;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}




-(id)init;
-(void)dealloc;
-(void)handleNotification:(id)arg0 ;
-(void)processBTConnectedLinksNotification:(id)arg0 ;
-(void)reConnect;
-(void)registerClient:(int)arg0 queue:(id)arg1 ;
-(void)setCriticalAirPlayEnabled:(BOOL)arg0 estimatedDuration:(unsigned int)arg1 criticalityPercentage:(unsigned short)arg2 ;
-(void)subscribeBtConnectedLinksNotification:(id)arg0 ;
-(void)unregisterClient;


@end


#endif