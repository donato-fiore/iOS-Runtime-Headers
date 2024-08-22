// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVACYPROXYNETWORKREGISTRATION_H
#define NSPPRIVACYPROXYNETWORKREGISTRATION_H

@class NWNetworkAgentRegistration, NSData, NSString;
@protocol NSPPrivacyProxyConfigAgentDelegate, NSPPrivacyProxyNetworkRegistrationDelegate;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyConfigAgent.h"

@interface NSPPrivacyProxyNetworkRegistration : NSObject <NSPPrivacyProxyConfigAgentDelegate>

 {
    id<NSPPrivacyProxyNetworkRegistrationDelegate> *_delegate;
    NSPPrivacyProxyConfigAgent *_proxyConfigAgent;
    NWNetworkAgentRegistration *_proxyConfigAgentRegistration;
    NSData *_configurationData;
    NSData *_configurationHash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)reportErrorForAgent:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;


@end


#endif