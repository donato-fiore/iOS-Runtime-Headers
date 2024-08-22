// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSETUPWIFISCANNER_H
#define SBSETUPWIFISCANNER_H

@class NSThread;

#import <Foundation/Foundation.h>


@interface SBSetupWiFiScanner : NSObject {
    *__WiFiManagerClient _wifiManager;
    *__WiFiDeviceClient _wifiDevice;
}


@property (copy, getter=_completionHandler, setter=_setCompletionHandler:) id *completionHandler; // ivar: _completionHandler
@property (retain, getter=_scanningThread, setter=_setScanningThread:) NSThread *scanningThread; // ivar: _scanningThread
@property (nonatomic, getter=_state, setter=_setState:) NSInteger state; // ivar: _state


-(void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg0 ;
-(void)_thread_cancelScanning;
-(void)_thread_closeWifiConnection;
-(void)_thread_wifiScanComplete:(struct __CFArray *)arg0 error:(BOOL)arg1 ;
-(void)_wifiScanningThread;
-(void)beginScanningWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif