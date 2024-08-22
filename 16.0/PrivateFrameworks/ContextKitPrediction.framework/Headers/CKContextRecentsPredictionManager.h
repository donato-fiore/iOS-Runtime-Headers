// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTEXTRECENTSPREDICTIONMANAGER_H
#define CKCONTEXTRECENTSPREDICTIONMANAGER_H

@class ATXProactiveSuggestionClientModel, DNDModeConfigurationService, NSString;
@protocol CKContextRecentsCacheDelegate, OS_dispatch_queue, OS_os_transaction, CKContextRecentsPredictionManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKContextRecentsCache.h"

@interface CKContextRecentsPredictionManager : NSObject <CKContextRecentsCacheDelegate>

 {
    ATXProactiveSuggestionClientModel *_clientModel;
    id *_suggestionsContributionBlock;
    id *_suggestionsClearingBlock;
    NSObject<OS_dispatch_queue> *_suggestionReportingQueue;
    DNDModeConfigurationService *_dndService;
    NSObject<OS_os_transaction> *_suggestionDonationTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKContextRecentsPredictionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKContextRecentsCache *recentsCache; // ivar: _recentsCache
@property (readonly) Class superclass;


-(NSInteger)_suggestionConfidenceForRecent:(id)arg0 withCount:(NSUInteger)arg1 ;
-(id)_localizedStringForKey:(id)arg0 ;
-(id)_modeForModeIdentifier:(id)arg0 withConfigurations:(id)arg1 ;
-(id)_oftenUsedStringForMode:(id)arg0 ;
-(id)_recentlyUsedStringForMode:(id)arg0 ;
-(id)_recentsEligibleForDonationMatchingMode:(id)arg0 fromRecents:(id)arg1 uuidsToCounts:(id)arg2 ;
-(id)_retrieveModeConfigurations;
-(id)_userFacingReasonStringForRecentWithNumberOfInstances:(NSUInteger)arg0 mode:(id)arg1 ;
-(id)eligiblePredictionsMatchingMode:(id)arg0 forRecents:(id)arg1 uuidsToCounts:(id)arg2 ;
-(id)init;
-(void)_clearSuggestions;
-(void)_createClientModelIfNecessary;
-(void)_createDoNotDisturbServiceIfNecessary;
-(void)_handleModeChangeToModeWithUUIDString:(id)arg0 forCache:(id)arg1 ;
-(void)_updateBlendingLayerWithSuggestions:(id)arg0 ;
-(void)dealloc;
-(void)didInitiatePruningMaintenanceTaskForCache:(id)arg0 existingRecentsUUIDs:(id)arg1 ;
-(void)modeDidChangeToModeWithUUIDString:(id)arg0 forCache:(id)arg1 ;
-(void)retrievePredictionsForMode:(id)arg0 withReply:(id)arg1 ;
-(void)startContributingPredictions;
-(void)stopContributingPredictions;


@end


#endif