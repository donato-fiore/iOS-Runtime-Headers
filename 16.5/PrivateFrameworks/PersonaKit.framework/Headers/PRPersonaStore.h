// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPERSONASTORE_H
#define PRPERSONASTORE_H

@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRPersonaStore : NSObject {
    NSXPCConnection *_personaServiceConnection;
    NSLock *_connectionLock;
    NSLock *_dataVendingFlagLock;
    BOOL _hasVendedData;
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
}


@property (readonly, nonatomic) BOOL hasVendedData;


-(id)init;
-(id)initWithServiceListenerEndpoint:(id)arg0 ;
-(id)likenessDataForPropagationToRecipient:(id)arg0 lastContactDate:(id)arg1 ;
-(id)likenessWithUniqueID:(id)arg0 ;
-(unsigned char)likenessVersionDigestForEmail:(id)arg0 ;
-(unsigned char)likenessVersionDigestForPhoneNumber:(id)arg0 ;
-(void)_startListeningForCacheChangeNotifications;
-(void)_stopListeningForCacheChangeNotifications;
-(void)allLikenessesForPrimaryiCloudAccountWithCompletion:(id)arg0 ;
-(void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)currentLikenessForPrimaryiCloudAccountWithCompletion:(id)arg0 ;
-(void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)donateLikeness:(id)arg0 forEmailAddress:(id)arg1 completion:(id)arg2 ;
-(void)donateLikeness:(id)arg0 forPhoneNumber:(id)arg1 completion:(id)arg2 ;
-(void)donateLikenessData:(id)arg0 forSenderID:(id)arg1 isPhoneNumber:(BOOL)arg2 ;
-(void)handleAppleIDEvent:(NSUInteger)arg0 account:(id)arg1 completion:(id)arg2 ;
-(void)likenessForEmailAddress:(id)arg0 completion:(id)arg1 ;
-(void)likenessForEmailAddress:(id)arg0 desiredFreshness:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)likenessForPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)likenessForPhoneNumber:(id)arg0 desiredFreshness:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)likenessesWithExternalIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(id)arg0 ;
-(void)removeLikeness:(id)arg0 forPrimayiCloudAccountWithCompletion:(id)arg1 ;
-(void)saveLikeness:(id)arg0 forPrimayiCloudAccountWithCompletion:(id)arg1 ;
-(void)screenNameForAppleIDWithAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)screenNameForEmailAddress:(id)arg0 completion:(id)arg1 ;
-(void)screenNameForPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)screenNameForPrimaryiCloudAccountWithCompletion:(id)arg0 ;
-(void)setLikeness:(id)arg0 forPrimayiCloudAccountWithCompletion:(id)arg1 ;
-(void)setLikenessVersionDigest:(unsigned char)arg0 forEmail:(id)arg1 ;
-(void)setLikenessVersionDigest:(unsigned char)arg0 forPhoneNumber:(id)arg1 ;
-(void)setScreenName:(id)arg0 forAppleIDWithAltDSID:(id)arg1 completion:(id)arg2 ;
-(void)setScreenName:(id)arg0 forPrimaryiCloudAccountWithCompletion:(id)arg1 ;


@end


#endif