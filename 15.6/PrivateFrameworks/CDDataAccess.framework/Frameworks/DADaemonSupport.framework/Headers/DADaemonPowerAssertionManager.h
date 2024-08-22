// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADAEMONPOWERASSERTIONMANAGER_H
#define DADAEMONPOWERASSERTIONMANAGER_H

@class DAPowerAssertionManager;



@interface DADaemonPowerAssertionManager : DAPowerAssertionManager



+(struct __WiFiManagerClient *)_getWiFiClientRef;
-(BOOL)_releaseAssertionForContext:(id)arg0 ;
-(BOOL)_retainAssertionForContext:(id)arg0 ;


@end


#endif