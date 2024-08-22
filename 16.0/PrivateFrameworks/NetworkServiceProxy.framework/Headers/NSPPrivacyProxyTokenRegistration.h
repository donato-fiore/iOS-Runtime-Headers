// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVACYPROXYTOKENREGISTRATION_H
#define NSPPRIVACYPROXYTOKENREGISTRATION_H

@class NWNetworkAgentRegistration, NSString;
@protocol NSPPrivacyProxyTokenAgentDelegate, NSPPrivacyProxyTokenRegistrationDelegate;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyTokenAgent.h"

@interface NSPPrivacyProxyTokenRegistration : NSObject <NSPPrivacyProxyTokenAgentDelegate>

 {
    id<NSPPrivacyProxyTokenRegistrationDelegate> *_delegate;
    NSPPrivacyProxyTokenAgent *_tokenAgent;
    NWNetworkAgentRegistration *_tokenAgentRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)reportErrorForAgent:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)tokenLowWaterMarkReachedForAgent:(id)arg0 ;


@end


#endif