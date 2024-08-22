// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIUSERACTIONDISCOVERINGENVIRONMENT_H
#define CNUIUSERACTIONDISCOVERINGENVIRONMENT_H

@class CNContactStore, NSString;
@protocol CNUIUserActionDiscoveringEnvironment, CNLSApplicationWorkspace, CNTUCallProviderManager, CNCapabilities, CNUIDefaultUserActionFetcher, CNSchedulerProvider, CNMCProfileConnection, CNUIUserActionTargetDiscovering, CNUIRTTUtilities;

#import <Foundation/Foundation.h>

#import "CNUIIDSContactPropertyResolver.h"

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment>

 {
    CNContactStore *_contactStore;
}


@property (readonly, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace; // ivar: _applicationWorkspace
@property (readonly, nonatomic) NSObject<CNTUCallProviderManager> *callProviderManager; // ivar: _callProviderManager
@property (readonly, nonatomic) NSObject<CNCapabilities> *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CNUIDefaultUserActionFetcher> *defaultUserActionFetcher; // ivar: _defaultUserActionFetcher
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *highLatencySchedulerProvider; // ivar: _highLatencySchedulerProvider
@property (readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver; // ivar: _idsContactPropertyResolver
@property (readonly, nonatomic) NSObject<CNMCProfileConnection> *profileConnection; // ivar: _profileConnection
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNUIUserActionTargetDiscovering> *targetDiscoveringHelper; // ivar: _targetDiscoveringHelper
@property (readonly, nonatomic) NSObject<CNUIRTTUtilities> *ttyUtilities; // ivar: _ttyUtilities


-(id)copyWithContactStore:(id)arg0 ;
-(id)init;
-(id)initWithApplicationWorkspace:(id)arg0 callProviderManager:(id)arg1 idsContactPropertyResolver:(id)arg2 profileConnection:(id)arg3 contactStore:(id)arg4 schedulerProvider:(id)arg5 highLatencySchedulerProvider:(id)arg6 capabilities:(id)arg7 defaultUserActionFetcher:(id)arg8 ttyUtilities:(id)arg9 ;
-(id)initWithIDSAvailabilityProvider:(id)arg0 schedulerProvider:(id)arg1 capabilities:(id)arg2 defaultUserActionFetcher:(id)arg3 ;
-(id)initWithIDSAvailablilityProvider:(id)arg0 schedulerProvider:(id)arg1 capabilities:(id)arg2 defaultUserActionFetcher:(id)arg3 ;
-(id)nts_lazyContactStore;


@end


#endif