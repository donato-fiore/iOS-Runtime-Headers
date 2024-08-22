// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14DEVICEACTIVITY28DEVICEACTIVITYMONITORCONTEXT_H
#define _TTC14DEVICEACTIVITY28DEVICEACTIVITYMONITORCONTEXT_H

@class NSExtensionContext;
@protocol USDeviceActivityMonitorExtension, _TtP14DeviceActivity25DeviceActivityMonitorHost_;



@interface _TtC14DeviceActivity28DeviceActivityMonitorContext : NSExtensionContext <USDeviceActivityMonitorExtension, _TtP14DeviceActivity25DeviceActivityMonitorHost_>

 {
    ? $__lazy_storage_$_monitor;
}




+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)eventDidReachThreshold:(id)arg0 activity:(id)arg1 replyHandler:(id)arg2 ;
-(void)eventWillReachThresholdWarning:(id)arg0 activity:(id)arg1 replyHandler:(id)arg2 ;
-(void)intervalDidEndForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalDidStartForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalWillEndWarningForActivity:(id)arg0 replyHandler:(id)arg1 ;
-(void)intervalWillStartWarningForActivity:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif