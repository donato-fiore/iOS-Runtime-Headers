// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMUSERSTORECLIENT_H
#define EDAMUSERSTORECLIENT_H

@class NSString;
@protocol EDAMUserStore, ENTProtocol;

#import <Foundation/Foundation.h>


@interface EDAMUserStoreClient : NSObject <EDAMUserStore>

 {
    id<ENTProtocol> *_inProtocol;
    id<ENTProtocol> *_outProtocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)checkVersion:(id)arg0 edamVersionMajor:(short)arg1 edamVersionMinor:(short)arg2 ;
-(id)authenticate:(id)arg0 password:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 supportsTwoFactor:(BOOL)arg4 ;
-(id)authenticateLongSession:(id)arg0 password:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 deviceIdentifier:(id)arg4 deviceDescription:(id)arg5 supportsTwoFactor:(BOOL)arg6 ;
-(id)authenticateLongSessionV2:(id)arg0 ;
-(id)authenticateOpenID:(id)arg0 consumerKey:(id)arg1 consumerSecret:(id)arg2 deviceIdentifier:(id)arg3 deviceDescription:(id)arg4 authLongSession:(BOOL)arg5 supportsTwoFactor:(BOOL)arg6 ;
-(id)authenticateToBusiness:(id)arg0 ;
-(id)completeTwoFactorAuthentication:(id)arg0 oneTimeCode:(id)arg1 deviceIdentifier:(id)arg2 deviceDescription:(id)arg3 ;
-(id)createSessionAuthenticationToken:(id)arg0 ;
-(id)getAccountLimits:(int)arg0 ;
-(id)getBootstrapInfo:(id)arg0 ;
-(id)getConnectedIdentities:(id)arg0 identityIds:(id)arg1 ;
-(id)getNoteStoreUrl:(id)arg0 ;
-(id)getPremiumInfo:(id)arg0 ;
-(id)getPublicUserInfo:(id)arg0 ;
-(id)getSubscriptionInfo:(id)arg0 ;
-(id)getUser:(id)arg0 ;
-(id)getUserUrls:(id)arg0 ;
-(id)initWithInProtocol:(id)arg0 outProtocol:(id)arg1 ;
-(id)initWithProtocol:(id)arg0 ;
-(id)listBusinessInvitations:(id)arg0 includeRequestedInvitations:(BOOL)arg1 ;
-(id)listBusinessUsers:(id)arg0 ;
-(id)refreshAuthentication:(id)arg0 ;
-(id)registerForSyncPushNotifications:(id)arg0 credentials:(id)arg1 ;
-(void)inviteToBusiness:(id)arg0 emailAddress:(id)arg1 ;
-(void)removeFromBusiness:(id)arg0 emailAddress:(id)arg1 ;
-(void)revokeLongSession:(id)arg0 ;
-(void)unregisterForSyncPushNotifications:(id)arg0 ;
-(void)updateBusinessUserIdentifier:(id)arg0 oldEmailAddress:(id)arg1 newEmailAddress:(id)arg2 ;


@end


#endif