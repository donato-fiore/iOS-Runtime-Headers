// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDACCESSPLUGINMANAGER_H
#define ACDACCESSPLUGINMANAGER_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDAccessPluginManager : NSObject {
    NSSet *_accessPlugins;
    NSObject<OS_dispatch_queue> *_accessPluginQueue;
}




-(id)_authorizationPluginForAccountType:(id)arg0 ;
-(id)init;
-(void)authorizeAccessToAccountsOfType:(id)arg0 forClient:(id)arg1 store:(id)arg2 completion:(id)arg3 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg0 forClient:(id)arg1 withOptions:(id)arg2 store:(id)arg3 allowUserInteraction:(BOOL)arg4 completion:(id)arg5 ;
-(void)revokeAccessToAccountsOfType:(id)arg0 forClient:(id)arg1 store:(id)arg2 completion:(id)arg3 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg0 store:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif