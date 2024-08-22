// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIPROFILEPICTURESTORE_H
#define AAUIPROFILEPICTURESTORE_H

@class ACAccount, ACAccountStore, AAGrandSlamSigner, CNContactStore, CNMonogrammer, NSOperationQueue;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface AAUIProfilePictureStore : NSObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    CNContactStore *_contactStore;
    id<NSObject> *_contactStoreDidChangeObserver;
    CNMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    os_unfair_lock_s _monogrammerLock;
}


@property (nonatomic) NSInteger monogramType; // ivar: _monogramType
@property (nonatomic) CGFloat pictureDiameter; // ivar: _pictureDiameter


-(BOOL)_contactSyncsWithiCloud:(id)arg0 error:(*id)arg1 ;
-(NSInteger)pictureStyle;
-(id)_contactWithImageDataMatchingFamilyMember:(id)arg0 error:(*id)arg1 ;
-(id)_correctlySizedImageFromImage:(id)arg0 ;
-(id)_fallbackProfilePictureForPersonWithFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)_familyMemberPersonPicture:(id)arg0 ;
-(id)_getAccountIdentifierForContact:(id)arg0 error:(*id)arg1 ;
-(id)_initWithoutAppleAccount;
-(id)_meCardPicture;
-(id)_monogrammedContactImage:(id)arg0 ;
-(id)_monogrammer;
-(id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg0 ;
-(id)_profilePictureForPicture:(id)arg0 crop:(BOOL)arg1 cropRect:(struct CGRect )arg2 cacheable:(BOOL)arg3 ;
-(id)_sizedProfilePictureWithFallback:(id)arg0 ;
-(id)cacheablePictureForPicture:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithAppleAccount:(id)arg0 grandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg0 store:(id)arg1 ;
-(id)initWithGrandSlamSigner:(id)arg0 ;
-(id)profilePictureForAccountOwner;
-(id)profilePictureForAccountOwnerWithoutMonogramFallback;
-(id)profilePictureForFamilyMember:(id)arg0 ;
-(id)profilePictureForLocalContact:(id)arg0 ;
-(id)profilePictureForPicture:(id)arg0 ;
-(id)profilePictureForPicture:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(void)_beginObservingContactStoreDidChangeNotifications;
-(void)_contactStoreDidChange:(id)arg0 ;
-(void)_decodeImageAndCropRectForContact:(id)arg0 completion:(id)arg1 ;
-(void)_endObservingContactStoreDidChangeNotifications;
-(void)_familyMember:(id)arg0 rawImageAndCropRect:(id)arg1 ;
-(void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg0 personID:(id)arg1 completion:(id)arg2 ;
-(void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg0 serverCacheTag:(id)arg1 completion:(id)arg2 ;
-(void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg0 serverCacheTag:(id)arg1 completion:(id)arg2 ;
-(void)_fetchProfilePictureSupersetWithRequest:(id)arg0 personID:(id)arg1 completion:(id)arg2 ;
-(void)_fetchProfilePictureWithRequest:(id)arg0 personID:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateMonogrammer;
-(void)_meCardRawImageAndCropRect:(id)arg0 ;
-(void)_updateServerProfilePictureForAccountOwner:(id)arg0 cropRect:(id)arg1 ;
-(void)_updateServerProfilePictureWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)fetchProfilePictureForAccountOwner:(id)arg0 ;
-(void)fetchProfilePictureForFamilyMember:(id)arg0 completion:(id)arg1 ;
-(void)fetchRawImageAndCropRectForAccountOwner:(id)arg0 ;
-(void)fetchRawImageAndCropRectForFamilyMember:(id)arg0 completion:(id)arg1 ;
-(void)profilePictureForAccountOwnerWithCompletion:(id)arg0 ;
-(void)setPictureStyle:(NSInteger)arg0 ;
-(void)setProfilePictureForAccountOwner:(id)arg0 cropRect:(id)arg1 ;


@end


#endif