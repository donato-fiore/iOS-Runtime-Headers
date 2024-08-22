// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USDEVICEACTIVITYMONITOREXTENSIONPROXY_H
#define USDEVICEACTIVITYMONITOREXTENSIONPROXY_H

@class NSArray;
@protocol USDeviceActivityMonitorExtension, OS_dispatch_queue_global;

#import <Foundation/Foundation.h>


@interface USDeviceActivityMonitorExtensionProxy : NSObject <USDeviceActivityMonitorExtension>



@property (readonly) NSArray *extensions; // ivar: _extensions
@property NSUInteger timeoutInSeconds; // ivar: _timeoutInSeconds
@property NSUInteger timeoutLeewayInSeconds; // ivar: _timeoutLeewayInSeconds
@property (readonly) NSObject<OS_dispatch_queue_global> *timeoutQueue; // ivar: _timeoutQueue


-(id)_scheduleTimerWithIntervalInSeconds:(NSUInteger)arg0 leewayInSeconds:(NSUInteger)arg1 extensionPID:(int)arg2 handler:(id)arg3 ;
-(id)_scheduleTimerWithIntervalInSeconds:(NSUInteger)arg0 leewayInSeconds:(NSUInteger)arg1 handler:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithExtensionsMatchingAttributes:(id)arg0 error:(*id)arg1 ;
-(void)_cancelTimer:(id)arg0 ;
-(void)_requestExtensionVendorProxyForExtension:(id)arg0 proxyHandler:(id)arg1 ;
-(void)eventDidReachThreshold:(id)arg0 activity:(id)arg1 replyHandler:(id)arg2 ;
-(void)eventWillReachThresholdWarning:(id)arg0 activity:(id)arg1 replyHandler:(id)arg2 ;
-(void)intervalDidEndForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalDidStartForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalWillEndWarningForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalWillStartWarningForActivity:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif