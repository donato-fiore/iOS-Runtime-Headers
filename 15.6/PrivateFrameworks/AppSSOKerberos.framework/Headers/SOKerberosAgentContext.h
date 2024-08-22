// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOKERBEROSAGENTCONTEXT_H
#define SOKERBEROSAGENTCONTEXT_H

@class NSOperationQueue, SOFullProfile;

#import <Foundation/Foundation.h>

#import "SOAuthorizationWrapper.h"
#import "SOKerberosExtensionData.h"
#import "SONetworkIdentity.h"
#import "SOKerberosRealmSettings.h"
#import "SOADSiteDiscovery.h"

@interface SOKerberosAgentContext : NSObject

@property BOOL authRequestPending; // ivar: _authRequestPending
@property (retain) SOAuthorizationWrapper *authWrapper; // ivar: _authWrapper
@property (readonly) NSOperationQueue *contextKerberosWorkQueue; // ivar: _contextKerberosWorkQueue
@property (readonly) NSOperationQueue *contextNetworkWorkQueue; // ivar: _contextNetworkWorkQueue
@property BOOL discoveryInProgress; // ivar: _discoveryInProgress
@property (retain) SOKerberosExtensionData *extensionData; // ivar: _extensionData
@property (retain) SONetworkIdentity *identity; // ivar: _identity
@property (retain) SOAuthorizationWrapper *passwordChangeAuthWrapper; // ivar: _passwordChangeAuthWrapper
@property (retain) SOAuthorizationWrapper *passwordSyncAuthWrapper; // ivar: _passwordSyncAuthWrapper
@property (retain) SOFullProfile *profile; // ivar: _profile
@property (retain) SOKerberosRealmSettings *settings; // ivar: _settings
@property (retain) SOADSiteDiscovery *siteDiscovery; // ivar: _siteDiscovery


-(id)initWithProfile:(id)arg0 ;


@end


#endif