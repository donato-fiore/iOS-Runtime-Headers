// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICONTACTSENVIRONMENT_H
#define CNUICONTACTSENVIRONMENT_H

@class CNContactsEnvironment, CNCollation, CNContactChangesNotifier, CNContactStore, CNGeminiManager, CNUIIDSAvailabilityProvider, CNUIUserActivityManager, CNFavorites, CNUIMeContactMonitor, CNUICoreRecentsManager;
@protocol CNUIUserActionDiscoveringEnvironment, CNLSApplicationWorkspace, CNUILikenessRendering, CNUIPRLikenessResolver, CNCapabilities, CNUIDefaultUserActionFetcher, CNUIApplicationLaunchCheckin, CNUIPlaceholderProviderFactory;

#import <Foundation/Foundation.h>

#import "CNUIExternalComponentsFactory.h"
#import "CNUISchedulerProvider.h"
#import "CNHealthStoreManager.h"

@interface CNUIContactsEnvironment : NSObject

@property (retain, nonatomic) NSObject<CNUIUserActionDiscoveringEnvironment> *actionDiscoveringEnvironment; // ivar: _actionDiscoveringEnvironment
@property (retain, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace; // ivar: _applicationWorkspace
@property (retain, nonatomic) NSObject<CNUILikenessRendering> *cachingLikenessRenderer; // ivar: _cachingLikenessRenderer
@property (retain, nonatomic) NSObject<CNUIPRLikenessResolver> *cachingLikenessResolver; // ivar: _cachingLikenessResolver
@property (retain, nonatomic) NSObject<CNUILikenessRendering> *cachingMonogramRenderer; // ivar: _cachingMonogramRenderer
@property (retain, nonatomic) NSObject<CNCapabilities> *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) CNContactsEnvironment *cnEnvironment; // ivar: _cnEnvironment
@property (retain, nonatomic) CNCollation *collation; // ivar: _collation
@property (retain, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // ivar: _componentsFactory
@property (retain, nonatomic) CNContactChangesNotifier *contactChangesNotifier; // ivar: _contactChangesNotifier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNUISchedulerProvider *defaultSchedulerProvider; // ivar: _defaultSchedulerProvider
@property (retain, nonatomic) NSObject<CNUIDefaultUserActionFetcher> *defaultUserActionFetcher; // ivar: _defaultUserActionFetcher
@property (retain, nonatomic) CNGeminiManager *geminiManager; // ivar: _geminiManager
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager; // ivar: _healthStoreManager
@property (retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // ivar: _idsAvailabilityProvider
@property (retain, nonatomic) CNUIUserActivityManager *inProcessActivityManager; // ivar: _inProcessActivityManager
@property (retain, nonatomic) CNContactStore *inProcessContactStore; // ivar: _inProcessContactStore
@property (retain, nonatomic) CNFavorites *inProcessFavorites; // ivar: _inProcessFavorites
@property (retain, nonatomic) NSObject<CNUIApplicationLaunchCheckin> *launchCheckinRegistrar; // ivar: _launchCheckinRegistrar
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor; // ivar: _meMonitor
@property (retain, nonatomic) NSObject<CNUIPlaceholderProviderFactory> *placeholderProviderFactory; // ivar: _placeholderProviderFactory
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager; // ivar: _recentsManager
@property (readonly, nonatomic) BOOL runningInContactsAppOniPad;
@property (nonatomic) *UCollator sortCollator; // ivar: _sortCollator


+(id)currentEnvironment;
+(id)makeCurrentEnvironment;
-(id)init;
-(id)initWithContactsEnvironment:(id)arg0 ;
-(id)nts_lazyActionDiscoveringEnvironment;
-(id)nts_lazyApplicationWorkspace;
-(id)nts_lazyCachingLikenessRenderer;
-(id)nts_lazyCachingLikenessResolver;
-(id)nts_lazyCachingMonogramRenderer;
-(id)nts_lazyCapabilities;
-(id)nts_lazyCollation;
-(id)nts_lazyComponentsFactory;
-(id)nts_lazyContactChangesNotifier;
-(id)nts_lazyContactStore;
-(id)nts_lazyDefaultSchedulerProvider;
-(id)nts_lazyDefaultUserActionFetcher;
-(id)nts_lazyGeminiManager;
-(id)nts_lazyHealthStoreManager;
-(id)nts_lazyIDSAvailabilityProvider;
-(id)nts_lazyInProcessActivityManager;
-(id)nts_lazyInProcessContactStore;
-(id)nts_lazyInProcessFavorites;
-(id)nts_lazyPlaceholderProviderFactory;
-(id)nts_lazyRecentsManager;
-(id)nts_makeActionDiscoveringEnvironment;
-(id)nts_makeCachingLikenessResolver;
-(id)nts_makeContactChangesNotifier;
-(id)nts_makeRecentsManager;
-(struct UCollator *)nts_lazySortCollator;
-(void)dealloc;


@end


#endif