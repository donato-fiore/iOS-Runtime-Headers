// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYSETTINGSVIEWCONTROLLERHELPER_H
#define FAFAMILYSETTINGSVIEWCONTROLLERHELPER_H

@class AAUIServerUIHookHandler, AAGrandSlamSigner, FAFamilyMember, NSMutableDictionary, NSMutableURLRequest, FARequestConfigurator, AAUIRemoteUIController, ACAccountStore, ACAccount, NSOperationQueue, AIDAAccountManager, NSString, UINavigationController, NSURL;
@protocol RemoteUIControllerDelegate, FAFamilySettingsViewControllerHelperDelegate;

#import <Foundation/Foundation.h>

#import "FACircleRemoteUIDelegate.h"
#import "FAFamilyCreditCard.h"
#import "FAProfilePictureStore.h"

@interface FAFamilySettingsViewControllerHelper : NSObject <RemoteUIControllerDelegate>

 {
    AAUIServerUIHookHandler *_serverUIHookHandler;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    FAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_objectModelDecorators;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    FAFamilyCreditCard *_paymentMethod;
    BOOL _fetchingPaymentMethodImage;
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_itunesAccount;
    BOOL _fetchingPaymentInfo;
    NSOperationQueue *_networkingQueue;
    FAProfilePictureStore *_familyPictureStore;
    AIDAAccountManager *_accountManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAFamilySettingsViewControllerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *urlBeingLoaded; // ivar: _urlBeingLoaded


-(BOOL)loadRemoteUIWithRequest:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)loadRemoteUIWithRequest:(id)arg0 url:(id)arg1 type:(NSInteger)arg2 completion:(id)arg3 ;
-(id)_appleIDGrandSlamSigner;
-(id)_itunesAccount;
-(id)_requestConfigurator;
-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 familyPictureStore:(id)arg2 accountManager:(id)arg3 ;
-(id)remoteUIController:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(void)_fetchFamilyPaymentInfoWithCompletion:(id)arg0 ;
-(void)_handleObjectModelChangeForController:(id)arg0 objectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_setFresnoRemoteUIDelgate:(id)arg0 ;
-(void)dealloc;
-(void)loadMemberDetailsForFamilyMember:(id)arg0 completion:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didRemoveObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willLoadRequest:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;


@end


#endif