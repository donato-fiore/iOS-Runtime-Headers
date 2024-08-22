// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSYSTEMCONFIGURATIONDYNAMICSTOREETHERNETWATCHER_H
#define PSSYSTEMCONFIGURATIONDYNAMICSTOREETHERNETWATCHER_H


#import <Foundation/Foundation.h>


@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    *__SCDynamicStore _dynamicStore;
    *__CFRunLoopSource _dynamicStoreSource;
}




+(id)sharedManager;
-(BOOL)hasEthernetNetworkInterfaces;
-(BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface *)arg0 ;
-(id)ethernetNetworkInterfaces;
-(id)init;
-(void)dealloc;
-(void)ethernetDynamicStoreDidChange;
-(void)registerForEthernetAdapterNotifications;


@end


#endif