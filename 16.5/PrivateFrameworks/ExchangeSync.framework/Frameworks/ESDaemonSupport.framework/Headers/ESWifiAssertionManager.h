// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESWIFIASSERTIONMANAGER_H
#define ESWIFIASSERTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface ESWifiAssertionManager : NSObject {
    int _refCount;
}




+(id)sharedWifiAssertionManager;
+(struct __WiFiManagerClient *)_getWiFiClientRef;
-(void)releaseWifiAssertion;
-(void)retainWifiAssertion;


@end


#endif