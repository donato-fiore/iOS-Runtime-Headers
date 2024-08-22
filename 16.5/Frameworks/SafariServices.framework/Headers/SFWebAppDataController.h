// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBAPPDATACONTROLLER_H
#define SFWEBAPPDATACONTROLLER_H

@class SFQueueingServiceViewControllerProxy<SFWebAppServiceViewControllerProtocol>, _UIAsyncInvocation, NSString;

#import <Foundation/Foundation.h>

#import "_SFWebAppViewController.h"

@interface SFWebAppDataController : NSObject {
    SFQueueingServiceViewControllerProxy<SFWebAppServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _SFWebAppViewController *_remoteViewController;
    NSString *_webClipIdentifier;
}




-(id)initWithWebClipIdentifier:(id)arg0 ;
-(void)clearWebsiteDataWithCompletion:(id)arg0 ;


@end


#endif