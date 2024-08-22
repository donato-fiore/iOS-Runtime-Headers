// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETSERVICEMANAGER_H
#define SHSHEETSERVICEMANAGER_H

@class NSString;
@protocol SFShareSheetSlotManagerDelegate, SHSheetHostServiceInterface, SHSheetServiceManagerDelegate;

#import <Foundation/Foundation.h>

#import "UISUIActivityViewControllerConfiguration.h"
#import "SHSheetSession.h"
#import "SFShareSheetSlotManager.h"

@interface SHSheetServiceManager : NSObject <SFShareSheetSlotManagerDelegate, SHSheetHostServiceInterface>



@property (readonly, nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetServiceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISUIActivityViewControllerConfiguration *hostConfiguration; // ivar: _hostConfiguration
@property (readonly, nonatomic) SHSheetSession *session; // ivar: _session
@property (readonly, nonatomic) SFShareSheetSlotManager *slotManager; // ivar: _slotManager
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateAfterConnection; // ivar: _updateAfterConnection


-(id)initWithSession:(id)arg0 ;
-(void)_handleConnectionCompletion;
-(void)_invalidateSlotManagerIfNeeded;
-(void)_sendConfiguration:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)connect;
-(void)connectionInterrupted;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)favoriteUserDefaultsActivity:(BOOL)arg0 withIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)longPressShareActivityWithIdentifier:(id)arg0 ;
-(void)performActionActivityWithIdentifier:(id)arg0 ;
-(void)performActivityInHostWithUUID:(id)arg0 ;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg0 ;
-(void)performEditAction;
-(void)performExtensionActivityInHostWithBundleID:(id)arg0 request:(id)arg1 ;
-(void)performPersonSuggestionWithIdentifier:(id)arg0 ;
-(void)performShareActivityWithIdentifier:(id)arg0 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg0 singleUseToken:(id)arg1 ;
-(void)performUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg0 suggestionProxies:(id)arg1 orderedUUIDs:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)provideFeedbackForPeopleSugestionIdentifier:(id)arg0 ;
-(void)removePersonSuggestionWithIdentifier:(id)arg0 ;
-(void)reportActivityWithInfo:(id)arg0 ;
-(void)setProgress:(id)arg0 withTopText:(id)arg1 bottomText:(id)arg2 forNodeWithIdentifier:(id)arg3 shouldPulse:(id)arg4 animated:(BOOL)arg5 ;
-(void)toggleUserDefaultsActivityWithIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)updateAsynchronously:(BOOL)arg0 ;
-(void)updateUserDefaultsFavorites:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif