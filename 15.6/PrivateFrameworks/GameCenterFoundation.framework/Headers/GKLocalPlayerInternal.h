// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLOCALPLAYERINTERNAL_H
#define GKLOCALPLAYERINTERNAL_H

@class NSString, NSArray, NSNumber;


#import "GKFriendPlayerInternal.h"

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}


@property NSUInteger loginStatus; // ivar: _loginStatus


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isDefaultNickname;
-(BOOL)isDefaultPrivacyVisibility;
-(BOOL)isFindable;
-(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(BOOL)isPhotoPending;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isUnderage;
-(id)accountName;
-(id)emailAddresses;
-(id)facebookUserID;
-(id)iCloudUserID;
-(id)minimalInternal;
-(int)defaultFamiliarity;
-(int)globalFriendListAccess;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfTurns;
-(void)setAccountName:(id)arg0 ;
-(void)setDefaultNickname:(BOOL)arg0 ;
-(void)setDefaultPrivacyVisibility:(BOOL)arg0 ;
-(void)setEmailAddresses:(id)arg0 ;
-(void)setFacebookUserID:(id)arg0 ;
-(void)setFindable:(BOOL)arg0 ;
-(void)setGlobalFriendListAccess:(int)arg0 ;
-(void)setICloudUserID:(id)arg0 ;
-(void)setNumberOfChallenges:(unsigned short)arg0 ;
-(void)setNumberOfRequests:(unsigned short)arg0 ;
-(void)setNumberOfTurns:(unsigned short)arg0 ;
-(void)setPhotoPending:(BOOL)arg0 ;
-(void)setPurpleBuddyAccount:(BOOL)arg0 ;
-(void)setUnderage:(BOOL)arg0 ;


@end


#endif