// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYBROWSERINJECTEDSETTINGSDEVICE_H
#define HMDACCESSORYBROWSERINJECTEDSETTINGSDEVICE_H

@protocol HMDAccessoryBrowserInjectedSettings, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic, getter=isCHIPEnabled) BOOL chipEnabled;


-(id)createAuthServerWithDelegate:(id)arg0 ;
-(id)createBtleAccessoryBrowser;
-(id)createCHIPAccessoryBrowser;
-(id)createHap2AccessoryBrowserWithStorage:(id)arg0 ;
-(id)createIpAccessoryBrowser;
-(id)createRelayAccessoryBrowser;
-(id)init;
-(id)workQueue;


@end


#endif