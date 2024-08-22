// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLHIGHLIGHTCENTER_H
#define SLHIGHLIGHTCENTER_H

@class NSString, NSArray, NSDate;
@protocol SLHighlightCacheDelegate, SLHighlightCenterAPIAdapting, SLHighlightCenterDelegate;

#import <Foundation/Foundation.h>

#import "SLHighlightsCache.h"
#import "SLInteractionHandler.h"

@interface SLHighlightCenter : NSObject <SLHighlightCacheDelegate>



@property (readonly, weak, nonatomic) NSObject<SLHighlightCenterAPIAdapting> *apiAdapterDelegate; // ivar: _apiAdapterDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat decay;
@property (weak, nonatomic) NSObject<SLHighlightCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *highlights; // ivar: _highlights
@property (retain, nonatomic) SLHighlightsCache *highlightsCache; // ivar: _highlightsCache
@property (readonly, nonatomic) CGFloat highlightsRankingScore;
@property (retain, nonatomic) SLInteractionHandler *interactionHandler; // ivar: _interactionHandler
@property (readonly, nonatomic) NSDate *latestHighlightDate;
@property (readonly, nonatomic) int notificationTokenAppSettingsChanges; // ivar: _notificationTokenAppSettingsChanges
@property (readonly, nonatomic) int notificationTokenSettingsChanges; // ivar: _notificationTokenSettingsChanges
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *variant; // ivar: _variant


+(BOOL)_bundleIDExistsInPreferences:(id)arg0 ;
+(BOOL)_isShareWithYouEnabled;
+(BOOL)_isShareWithYouOnboarded;
+(BOOL)isAutomaticSharingEnabled;
+(BOOL)isEnabled;
+(BOOL)shouldShowOnboardingShieldView;
+(id)SLVariantDefault;
+(id)SLVariantNewsToday;
+(id)highlightCenterQueue;
+(id)rapportClient;
+(void)_checkAndInitializeBundleIDToAppPreferences:(id)arg0 ;
+(void)shouldShowOnboardingShieldViewForNearbyDevice:(id)arg0 ;
-(id)_initWithAppIdentifier:(id)arg0 apiAdapterDelegate:(id)arg1 ;
-(id)appIdentifierForHighlightsCache;
-(id)fetchAttributionForAttributionIdentifier:(id)arg0 ;
-(id)fetchAttributionsForHighlight:(id)arg0 ;
-(id)init;
-(id)initWithAppIdentifier:(id)arg0 ;
-(id)initWithAppIdentifier:(id)arg0 apiAdapterDelegate:(id)arg1 ;
-(void)_fetchHighlightsWithLimit:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)_legacyNotifyDelegateDidAddHighlights;
-(void)_legacyNotifyDelegateDidRemoveHighlights:(id)arg0 ;
-(void)_notifyAPIAdapterDelegateHighlightsChanged;
-(void)_registerNotifications;
-(void)appEnablementStateChanged;
-(void)dealloc;
-(void)enablementStateChanged;
-(void)feedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)feedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)fetchHighlights:(id)arg0 ;
-(void)fetchHighlightsWithLimit:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)legacyDidAddHighlights;
-(void)legacyDidRemoveHighlights:(id)arg0 ;
// -(void)runAfterInitialFetch:(id)arg0 onQueue:(unk)arg1  ;
-(void)updateHighlights;


@end


#endif