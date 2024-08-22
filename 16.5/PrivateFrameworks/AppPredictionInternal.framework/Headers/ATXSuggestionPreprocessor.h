// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTIONPREPROCESSOR_H
#define ATXSUGGESTIONPREPROCESSOR_H

@class ATXEngagementRecordManager, ATXBlendingLayerHyperParameters, NSString;
@protocol ATXSuggestionModeFilterObserver, ATXSuggestionPreprocessorProtocol;

#import <Foundation/Foundation.h>

#import "ATXActionToWidgetConverter.h"
#import "ATXNotificationsLoggingServer.h"
#import "ATXLockscreenBlacklist.h"
#import "ATXSuggestionModeFilter.h"

@interface ATXSuggestionPreprocessor : NSObject <ATXSuggestionModeFilterObserver, ATXSuggestionPreprocessorProtocol>

 {
    ATXActionToWidgetConverter *_converter;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXNotificationsLoggingServer *_notificationsLoggingServer;
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    ATXSuggestionModeFilter *_modeFilter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bundleIdAssociatedWithSuggestion:(id)arg0 ;
+(id)contactIdsAssociatedWithContactsWidgetIntent:(id)arg0 ;
+(id)contactIdsAssociatedWithSuggestion:(id)arg0 ;
-(BOOL)_bundleSupportsINPlayMediaIntentForBundleId:(id)arg0 fromUnitTest:(BOOL)arg1 ;
-(id)filterOutRecentlyEngagedSuggestions:(id)arg0 ;
-(id)filterOutSuggestionsForUninstalledOrRestrictedApps:(id)arg0 ;
-(id)init;
-(id)initWithEngagementRecordManager:(id)arg0 notificationsLoggingServer:(id)arg1 lockscreenBlacklist:(id)arg2 actionToWidgetConverter:(id)arg3 ;
-(id)preprocessedSuggestionsForAppSwitcherConsumer:(id)arg0 ;
-(id)preprocessedSuggestionsForMediaControlsConsumer:(id)arg0 ;
-(id)suggestionsByPreprocessingRankedSuggestions:(id)arg0 forConsumerSubType:(unsigned char)arg1 ;
-(id)suggestionsWithInvalidSuggestionsRemoved:(id)arg0 ;
-(void)configurationDidChangeForFilter:(id)arg0 ;


@end


#endif