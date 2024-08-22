// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBUGENERATEDPASSWORDCREDENTIALUPDATER_H
#define WBUGENERATEDPASSWORDCREDENTIALUPDATER_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBUGeneratedPasswordCredentialUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_urlsScheduledForUpdating;
    NSMutableDictionary *_urlsToUpdateRequests;
}




+(id)sharedUpdater;
-(id)init;
-(void)_performRequest:(id)arg0 ;
-(void)updateCredentialWithNewUsername:(id)arg0 newGeneratedPassword:(id)arg1 lastGeneratedPassword:(id)arg2 credentialURL:(id)arg3 protectionSpace:(id)arg4 shouldSaveNewCredential:(BOOL)arg5 ;


@end


#endif