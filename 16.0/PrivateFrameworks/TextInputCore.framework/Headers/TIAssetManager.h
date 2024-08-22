// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIASSETMANAGER_H
#define TIASSETMANAGER_H

@class NSMutableArray, NSMutableSet, NSArray, NSString, NSTimer;
@protocol DDSAssetCenterDelegate, TIAssetManaging, OS_dispatch_queue, TIInputModePreferenceProvider;

#import <Foundation/Foundation.h>

#import "TIRequestedInputModes.h"

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging>

 {
    NSMutableArray *_notificationTokens;
    NSMutableSet *_languagesWithWarmedAssets;
}


@property (retain, nonatomic) NSArray *currentActiveRegions; // ivar: _currentActiveRegions
@property (retain, nonatomic) NSArray *currentNormalizedActiveRegions; // ivar: _currentNormalizedActiveRegions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *didUpdateAssetsTimer; // ivar: _didUpdateAssetsTimer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *enabledInputModeIdentifiersProviderBlock; // ivar: _enabledInputModeIdentifiersProviderBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TIInputModePreferenceProvider> *inputModePreferenceProvider; // ivar: _inputModePreferenceProvider
@property (readonly, nonatomic) NSMutableSet *languagesWithWarmedAssets;
@property (copy, nonatomic) id *preferencesProviderBlock; // ivar: _preferencesProviderBlock
@property (readonly, nonatomic) CGFloat requestExpirationInterval;
@property (readonly, nonatomic) TIRequestedInputModes *requestedInputModes; // ivar: _requestedInputModes
@property (copy, nonatomic) NSArray *requestedInputModes_mainThreadCache; // ivar: _requestedInputModes_mainThreadCache
@property (readonly) Class superclass;


+(id)_addressFromRegion:(id)arg0 ;
+(id)_regionFromAddress:(id)arg0 ;
+(id)sharedAssetManager;
+(id)sharedAssetManagerWithEnabledInputModesProvider:(id)arg0 ;
+(id)singletonInstanceWithEnabledInputModesProvider:(id)arg0 ;
+(void)setSharedAssetManager:(id)arg0 ;
-(BOOL)inputModeHasRegions:(id)arg0 ;
-(NSInteger)amountOfPurgeableAssetsWithUrgency:(int)arg0 ;
-(NSInteger)tryToPurgeAssetAmount:(NSInteger)arg0 urgency:(int)arg1 ;
-(id)_ddsAssetsForLanguageIdentifier:(id)arg0 cachedOnly:(BOOL)arg1 ;
-(id)_ddsContentItemsFromAssets:(id)arg0 contentType:(id)arg1 filteredWithRegion:(BOOL)arg2 ;
-(id)activeInputModeLevels;
-(id)activeInputModes;
-(id)ddsAssertionIDFromInputMode:(id)arg0 withPotentialRegions:(id)arg1 ;
-(id)ddsAssetContentItemsWithContentType:(id)arg0 inputMode:(id)arg1 filteredWithRegion:(BOOL)arg2 ;
-(id)ddsLanguageIdentifierFromInputMode:(id)arg0 ;
-(id)defaultEnabledInputModes;
-(id)enabledInputModes;
-(id)init;
-(id)initForTestingWithRequestedInputModes:(id)arg0 inputModePreferenceProvider:(id)arg1 enabledInputModesProvider:(id)arg2 ;
-(id)initWithRequestedInputModes:(id)arg0 inputModePreferenceProvider:(id)arg1 enabledInputModesProvider:(id)arg2 ;
-(id)levelsForInputMode:(id)arg0 ;
-(id)topActiveRegions;
-(id)updatedActiveRegions;
-(void)_warmAssetQueriesForInputModes:(id)arg0 ;
-(void)_warmAssetQueryForLanguage:(id)arg0 ;
-(void)addAssertionWithInputMode:(id)arg0 assertionID:(id)arg1 potentialRegions:(id)arg2 ;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg0 assertionID:(id)arg1 region:(id)arg2 clientID:(id)arg3 withHandler:(id)arg4 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg0 ;
-(void)ddsAssetContentItemsWithContentType:(id)arg0 inputMode:(id)arg1 filteredWithRegion:(BOOL)arg2 completion:(id)arg3 ;
-(void)ddsAssetsForInputMode:(id)arg0 cachedOnly:(BOOL)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateAssets;
-(void)didUpdateAssetsWithType:(id)arg0 ;
-(void)getActiveRegionsWithCompletion:(id)arg0 ;
-(void)normalizedRegionsForGeoCodedAddresses:(id)arg0 withCompletion:(id)arg1 ;
-(void)registerCacheDeleteCallbacks;
-(void)registerForNotifications;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg0 forClientID:(id)arg1 withHandler:(id)arg2 ;
-(void)requestAssetDownloadForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)scheduleAssetsDidChangeNotificationWithDelay:(CGFloat)arg0 ;
-(void)unregisterForNotifications;
-(void)updateAssertionsForInputModes:(id)arg0 ;
-(void)updatedActiveRegionsWithCompletionWithCompletion:(id)arg0 ;


@end


#endif