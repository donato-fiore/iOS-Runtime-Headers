// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPINTERNALCLIENT_H
#define PPINTERNALCLIENT_H


#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"

@interface PPInternalClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(BOOL)setTrialUseDefaultFiles:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)trialOverridePath:(id)arg0 namespaceName:(id)arg1 factorName:(id)arg2 error:(*id)arg3 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)sysdiagnoseInformationWithError:(*id)arg0 ;


@end


#endif