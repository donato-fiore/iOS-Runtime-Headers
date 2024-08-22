// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASKPROFILEPICTURESTORE_H
#define ASKPROFILEPICTURESTORE_H

@class ACAccountStore, NSString, AAUIProfilePictureStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASKProfilePictureStore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property BOOL hasRequestedImages; // ivar: _hasRequestedImages
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (copy, nonatomic) NSString *primaryAccountName; // ivar: _primaryAccountName
@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore; // ivar: _profilePictureStore
@property (copy, nonatomic) NSString *storeAccountName; // ivar: _storeAccountName


+(id)sharedStore;
-(id)_profilePictureForFamilyMember:(id)arg0 withProfilePictureStore:(id)arg1 usingMonogrammer:(id)arg2 ;
-(id)init;
-(void)_markAsHasRequestedImages;
-(void)_updateMonogrammerWithDiameter:(CGFloat)arg0 ;
-(void)appleAccountsDidChange:(id)arg0 ;
-(void)configureProfilePictureStoreAndNotifyIfNeeded;
-(void)dealloc;
-(void)notifyIfNeeded;
-(void)profilePictureForAccountOwnerWithoutMonogramFallbackWithPictureDiameter:(CGFloat)arg0 completion:(id)arg1 ;
-(void)profilePictureStoreDidChange:(id)arg0 ;
-(void)profilePictureWithMonogramFallbackForFamilyMember:(id)arg0 pictureDiameter:(CGFloat)arg1 completion:(id)arg2 ;
-(void)profilePictureWithMonogramFallbackForFamilyMembers:(id)arg0 pictureDiameter:(CGFloat)arg1 completion:(id)arg2 ;
-(void)storeAccountsDidChange:(id)arg0 ;


@end


#endif