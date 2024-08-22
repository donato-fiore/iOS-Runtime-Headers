// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKACCOUNT_H
#define MPCPLAYBACKACCOUNT_H

@class ICURLBag, NSString, ICMusicSubscriptionStatus, ICUserIdentity;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPCPlaybackAccount : NSObject <NSCopying>



@property (nonatomic, getter=isActiveAccount) BOOL activeAccount; // ivar: _activeAccount
@property (retain, nonatomic) ICURLBag *bag; // ivar: _bag
@property (readonly, nonatomic) BOOL canAutoPlay;
@property (readonly, nonatomic, getter=isDelegated) BOOL delegated; // ivar: _delegated
@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (nonatomic) BOOL hasCloudLibraryEnabled; // ivar: _hasCloudLibraryEnabled
@property (copy, nonatomic) NSString *hashedDSID; // ivar: _hashedDSID
@property (nonatomic, getter=isPrivateListeningEnabled) BOOL privateListeningEnabled; // ivar: _privateListeningEnabled
@property (readonly, nonatomic) BOOL requiresAuthorizationTokenForPlayback;
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) BOOL usesLease;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDelegatedUserIdentity:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 subscriptionStatus:(id)arg1 ;


@end


#endif