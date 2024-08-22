// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPLAYERCREDENTIALCONTROLLER_H
#define GKPLAYERCREDENTIALCONTROLLER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>

#import "GKThreadsafeDictionary.h"

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache; // ivar: _allCredentialsCache
@property NSInteger loginCancelledCount; // ivar: _loginCancelledCount
@property (readonly) BOOL loginDisabled;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache; // ivar: _primaryCredentialCache
@property (retain, nonatomic) ACAccountStore *store; // ivar: _store


+(id)accessQueue;
+(id)sharedController;
+(void)migrateOldAccountInformation;
-(NSUInteger)loginStatusForCredential:(id)arg0 ;
-(id)_transactAndWait:(id)arg0 ;
-(id)accessQueue;
-(id)allCredentialsForEnvironment:(NSInteger)arg0 ;
-(id)credentialForPlayer:(id)arg0 environment:(NSInteger)arg1 ;
-(id)credentialForUsername:(id)arg0 environment:(NSInteger)arg1 ;
-(id)init;
-(id)primaryCredentialForEnvironment:(NSInteger)arg0 ;
-(id)pushCredentialForEnvironment:(NSInteger)arg0 ;
-(id)suggestedUsername;
// -(void)_transact:(id)arg0 complete:(unk)arg1  ;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)accountStoreEmailDidChange:(id)arg0 ;
-(void)dealloc;
-(void)getAltDSIDFromIDMSForCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateCredentialCaches;
-(void)removeAllCredentialsForEnvironment:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)replaceCredential:(id)arg0 withCredential:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPrimaryCredential:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif