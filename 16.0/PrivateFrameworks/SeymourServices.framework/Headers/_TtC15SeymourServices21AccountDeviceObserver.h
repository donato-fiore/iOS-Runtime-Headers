// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15SEYMOURSERVICES21ACCOUNTDEVICEOBSERVER_H
#define _TTC15SEYMOURSERVICES21ACCOUNTDEVICEOBSERVER_H

@class SwiftObject;



@interface _TtC15SeymourServices21AccountDeviceObserver : SwiftObject {
    ? $defaultActor;
    ? eventHub;
    ? accountFetcher;
    ? accountDeviceFetcher;
    ? platform;
    ? _fakeSupportedWatchAvailable;
    ? accountHasSupportedWatch;
    ? accountOwnedDevices;
}




-(void)deviceListChanged;


@end


#endif