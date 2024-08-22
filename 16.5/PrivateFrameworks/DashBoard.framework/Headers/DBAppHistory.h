// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBAPPHISTORY_H
#define DBAPPHISTORY_H

@class NSMutableDictionary, NSString, CARObserverHashTable, NSArray, CRCarPlayAppPolicyEvaluator;
@protocol DBAppHistoryAppDockProviding, DBWorkspaceObserver, DBAppPolicyProviding;

#import <Foundation/Foundation.h>


@interface DBAppHistory : NSObject <DBAppHistoryAppDockProviding, DBWorkspaceObserver>



@property (retain, nonatomic) NSMutableDictionary *appHistory; // ivar: _appHistory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL nowPlayingIsVisible; // ivar: _nowPlayingIsVisible
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSArray *orderedAppHistory;
@property (readonly, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator; // ivar: _policyEvaluator
@property (weak, nonatomic) NSObject<DBAppPolicyProviding> *policyProvider; // ivar: _policyProvider
@property (retain, nonatomic) NSArray *sessionAppContextURLs; // ivar: _sessionAppContextURLs
@property (retain, nonatomic) NSMutableDictionary *sessionContextOwners; // ivar: _sessionContextOwners
@property (retain, nonatomic) NSArray *sessionEchoContextURLs; // ivar: _sessionEchoContextURLs
@property (retain, nonatomic) NSArray *sessionFeatureKeys; // ivar: _sessionFeatureKeys
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(NSUInteger)applicationCategoryForURL:(id)arg0 ;
+(id)availableApplicationContexts;
+(id)contextForApplicationCategory:(NSUInteger)arg0 ;
-(BOOL)_evaluatePolicyForBundleIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)_isMapsApplicationForBundleIdentifier:(id)arg0 ;
-(BOOL)_isNowPlayingApplicationForBundleIdentifier:(id)arg0 ;
-(BOOL)applicationVisibleInCarPlay:(id)arg0 withIconProvider:(id)arg1 ;
-(BOOL)isBundleIdentifierValidForDock:(id)arg0 ;
-(CGFloat)lastActivationTimeForApplication:(id)arg0 ;
-(CGFloat)lastActivationTimeForBundleIdentifier:(id)arg0 ;
-(NSUInteger)appDockCategoryForBundleIdentifier:(id)arg0 ;
-(NSUInteger)applicationCategoryForBundleIdentifier:(id)arg0 ;
-(NSUInteger)currentOwnerForContext:(id)arg0 ;
-(id)_allInstalledApplicationsInCategory:(NSUInteger)arg0 ;
-(id)_appInfoForBundleIdentifier:(id)arg0 ;
-(id)_orderedAppsForBundleIdentifiers:(id)arg0 ;
-(id)_preferredBundleIdentifierInCategory:(NSUInteger)arg0 ;
-(id)initWithPolicyEvaluator:(id)arg0 ;
-(id)initWithPolicyProvider:(id)arg0 ;
-(id)orderedAppsMatchingCategory:(NSUInteger)arg0 ;
-(id)orderedAppsMatchingDockCategory:(NSUInteger)arg0 ;
-(id)orderedBundleIdentifiersMatchingDockCategory:(NSUInteger)arg0 ;
-(id)policyForBundleIdentifier:(id)arg0 ;
-(void)_bundleIdentifierDidBecomeVisible:(id)arg0 previousBundleIdentifier:(id)arg1 ;
-(void)_commonInit;
-(void)_evaluateUniversalLinksForURL:(id)arg0 withIconProvider:(id)arg1 completion:(id)arg2 ;
-(void)_nowPlayingWillAppear:(id)arg0 ;
-(void)_nowPlayingWillDisappear:(id)arg0 ;
-(void)_persistSessionUIContextOwnership;
-(void)_sessionDidConnect:(id)arg0 environmentConfiguration:(id)arg1 ;
-(void)_sessionDidDisconnect;
-(void)addObserver:(id)arg0 ;
-(void)applySessionAppContexts:(id)arg0 ;
-(void)applySessionEchoContexts:(id)arg0 ;
-(void)dealloc;
-(void)nowPlayingIconTapped;
-(void)openApplicationURL:(id)arg0 withIconProvider:(id)arg1 activationSettings:(id)arg2 completion:(id)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDashboardAppOnDisconnect:(id)arg0 ;
-(void)updateOwner:(NSUInteger)arg0 forContext:(id)arg1 ;
-(void)workspace:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;


@end


#endif