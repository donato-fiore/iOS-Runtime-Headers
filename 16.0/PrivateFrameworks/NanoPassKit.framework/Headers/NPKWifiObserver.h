// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKWIFIOBSERVER_H
#define NPKWIFIOBSERVER_H

@protocol OS_dispatch_queue, NPKWiFiObserverDelegate;

#import <Foundation/Foundation.h>


@interface NPKWifiObserver : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    uint8_t _wiFiEnabled;
}


@property (weak, nonatomic) NSObject<NPKWiFiObserverDelegate> *delegate; // ivar: _delegate


-(BOOL)isWifiEnabled;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)_setupInterface;
-(void)_updateWiFiStateAndNotifiyObserver:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif