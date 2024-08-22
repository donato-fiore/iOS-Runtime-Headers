// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQCLOUDSTORAGESPECIFIERPROVIDER_H
#define ICQCLOUDSTORAGESPECIFIERPROVIDER_H

@class ACAccount, UINavigationController, NSMutableArray, PSSpecifier, AAUIQuotaResponse, NSString, NSArray;
@protocol DelayedPushDelegate, RUITableViewRowDelegate, AAUISpecifierProvider, NSObject, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQPreferencesRemoteUIDelegate.h"

@interface ICQCloudStorageSpecifierProvider : NSObject <DelayedPushDelegate, RUITableViewRowDelegate, AAUISpecifierProvider>

 {
    ACAccount *_account;
    UINavigationController *_navController;
    NSMutableArray *_storageSpecifiers;
    PSSpecifier *_activeSpecifier;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    BOOL _delayedEnterManageStorage;
    id<NSObject> *_quotaChangeNotificationObserver;
}


@property (retain, nonatomic) AAUIQuotaResponse *cachedQuotaResponse; // ivar: _cachedQuotaResponse
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialStorageFlowAction; // ivar: _initialStorageFlowAction
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)_shouldEnableManageStorage;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 animatePush:(*BOOL)arg2 withCompletion:(id)arg3 ;
-(Class)tableCellClassForTableViewRow:(id)arg0 ;
-(id)_valueForStorageGraphSpecifier:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 navigationController:(id)arg1 ;
-(void)_enterManageStorage:(id)arg0 ;
-(void)_fetchQuotaInfo:(id)arg0 ;
-(void)_finishLoadingActiveSpecifier;
-(void)_manageStorageSpecifierWasTapped:(id)arg0 ;
-(void)_reloadStorageSpecifiers;
-(void)_startObservingQuotaChangeNotifications;
-(void)_stopObservingQuotaChangeNotifications;
-(void)dealloc;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)remoteUIDelegate:(id)arg0 didCreatePage:(id)arg1 inObjectModel:(id)arg2 ;


@end


#endif