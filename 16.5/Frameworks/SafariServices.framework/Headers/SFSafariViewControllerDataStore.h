// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSAFARIVIEWCONTROLLERDATASTORE_H
#define SFSAFARIVIEWCONTROLLERDATASTORE_H

@class SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol>, _UIAsyncInvocation;

#import <Foundation/Foundation.h>

#import "SFBrowserRemoteViewController.h"

@interface SFSafariViewControllerDataStore : NSObject {
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFBrowserRemoteViewController *_remoteViewController;
}




+(id)defaultDataStore;
-(id)_init;
-(void)clearWebsiteDataWithCompletionHandler:(id)arg0 ;


@end


#endif