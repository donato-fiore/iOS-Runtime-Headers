// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIJSITUNESSTORE_H
#define SKUIJSITUNESSTORE_H

@class IKJSITunesStore, NSString;
@protocol SKUIItemStateCenterObserver, SKUIJSITunesStore;


#import "SKUIClientContext.h"
#import "SKUIJSAppleAccount.h"
#import "SKUIJSRestrictions.h"

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore>

 {
    SKUIClientContext *_clientContext;
    BOOL _isAppPreview;
}


@property (nonatomic) NSInteger applicationIconBadgeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *hostApp;
@property (readonly, nonatomic) BOOL isAppPreview;
@property (readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
@property (readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property (readonly) Class superclass;


-(BOOL)areVideosCloudPurchasesEnabled;
-(BOOL)resourceExists:(id)arg0 ;
-(BOOL)sendAppPreviewStateChanged:(BOOL)arg0 ;
-(BOOL)sendOnShowPageEventType:(id)arg0 data:(id)arg1 ;
-(BOOL)sendOnXEventWithDictionary:(id)arg0 ;
-(id)_millisecondsFromTimeInterval:(CGFloat)arg0 ;
-(id)_rentalInfoFromMediaItems:(id)arg0 ;
-(id)documentSizeForNavigationDocument:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 clientContext:(id)arg1 ;
-(void)_displayWifiConnectionRequiredAlert;
-(void)_finishPurchaseForOptions:(id)arg0 purchaseResponse:(id)arg1 ;
-(void)_finishSoftwarePurchaseForOptions:(id)arg0 purchaseResponse:(id)arg1 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg0 ;
-(void)approveInPerson:(id)arg0 ;
-(void)attemptLocalAskToBuyApproval:(id)arg0 ;
-(void)buy:(id)arg0 ;
-(void)clearToggleStateItems;
-(void)dealloc;
-(void)download:(id)arg0 ;
-(void)downloadExistsFor:(id)arg0 ;
-(void)exit:(id)arg0 ;
-(void)fetchMSOProviderStatus:(id)arg0 ;
-(void)fetchTemplates:(id)arg0 ;
-(void)findApps:(id)arg0 ;
-(void)findLibraryItems:(id)arg0 ;
-(void)findOwnedItems:(id)arg0 ;
-(void)findToggleStateForItem:(id)arg0 ;
-(void)getAdminStatus:(id)arg0 ;
-(void)getBookSample:(id)arg0 ;
-(void)getProfilePermissions:(id)arg0 ;
-(void)headsUp:(id)arg0 ;
-(void)isInstalledApp:(id)arg0 ;
-(void)isRemovedSystemApp:(id)arg0 ;
-(void)itemStateCenterMediaLibrariesDidChange:(id)arg0 ;
-(void)launchICloudFamilySettings;
-(void)loadGratisContent:(id)arg0 ;
-(void)loadRental:(id)arg0 ;
-(void)loadRentals:(id)arg0 ;
-(void)log:(id)arg0 ;
-(void)resetStateForActiveDocument;
-(void)restoreRemovedSystemApp:(id)arg0 ;
-(void)sendApplicationDidEnterBackground;
-(void)sendApplicationWillEnterForeground;
-(void)sendApplicationWindowSizeDidUpdate:(struct CGSize )arg0 ;
-(void)sendOnNavigationStackWillPop:(BOOL)arg0 ;
-(void)sendOnPageResponseWithDocument:(id)arg0 data:(id)arg1 URLResponse:(id)arg2 performanceMetrics:(id)arg3 ;
-(void)setPreviewOverlay:(id)arg0 ;
-(void)updateToggleStateForItem:(id)arg0 toggled:(BOOL)arg1 ;


@end


#endif