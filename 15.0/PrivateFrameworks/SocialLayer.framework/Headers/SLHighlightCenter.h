// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLHIGHLIGHTCENTER_H
#define SLHIGHLIGHTCENTER_H

@class NSMutableDictionary, NSArray, NSString, NSDate;
@protocol SLHighlightCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLInteractionHandler.h"

@interface SLHighlightCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *attributionMap; // ivar: _attributionMap
@property (retain, nonatomic) NSArray *currentHighlights; // ivar: _currentHighlights
@property (readonly, nonatomic) CGFloat decay;
@property (weak, nonatomic) NSObject<SLHighlightCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *highlightCenterQueue; // ivar: _highlightCenterQueue
@property (readonly, nonatomic) CGFloat highlightsRankingScore;
@property (retain, nonatomic) SLInteractionHandler *interactionHandler; // ivar: _interactionHandler
@property (readonly, nonatomic) NSDate *latestHighlightDate;
@property (readonly, nonatomic) int notificationTokenAppSettingsChanges; // ivar: _notificationTokenAppSettingsChanges
@property (readonly, nonatomic) int notificationTokenDeleteHighlights; // ivar: _notificationTokenDeleteHighlights
@property (readonly, nonatomic) int notificationTokenRefreshHighlights; // ivar: _notificationTokenRefreshHighlights
@property (readonly, nonatomic) int notificationTokenSettingsChanges; // ivar: _notificationTokenSettingsChanges
@property (nonatomic) NSUInteger numberOfItemsRequested; // ivar: _numberOfItemsRequested
@property (copy, nonatomic) id *refreshBlock; // ivar: _refreshBlock
@property (retain, nonatomic) NSString *variant; // ivar: _variant


+(BOOL)_bundleIDExistsInPreferences:(id)arg0 ;
+(BOOL)_developmentEnablementCheck;
+(BOOL)_isShareWithYouEnabled;
+(BOOL)_isShareWithYouOnboarded;
+(BOOL)isAutomaticSharingEnabled;
+(BOOL)isEnabled;
+(BOOL)shouldShowOnboardingShieldView;
+(id)SLVariantDefault;
+(id)SLVariantNewsToday;
+(id)rapportClient;
+(void)_checkAndInitializeBundleIDToAppPreferences:(id)arg0 ;
+(void)shouldShowOnboardingShieldViewForNearbyDevice:(id)arg0 ;
-(id)fetchAttributionForAttributionIdentifier:(id)arg0 ;
-(id)fetchAttributionsForHighlight:(id)arg0 ;
-(id)init;
-(id)initWithAppIdentifier:(id)arg0 ;
-(void)appEnablementStateChanged;
-(void)dealloc;
-(void)didDeleteHighlightsOrAttributions;
-(void)didRefreshHighlights;
-(void)enablementStateChanged;
-(void)feedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)feedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)fetchHighlightsWithLimit:(NSUInteger)arg0 completionBlock:(id)arg1 ;


@end


#endif