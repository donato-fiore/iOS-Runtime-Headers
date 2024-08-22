// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONSLEEPMIGRATIONSERVER_H
#define ATXUSEREDUCATIONSUGGESTIONSLEEPMIGRATIONSERVER_H

@class ATXUserEducationSuggestionConnector, ATXInstalledSuggestedPagesTracker, ATXHomeScreenConfigCache;
@protocol ATXUserEducationSuggestionModeChangeObserver;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionSleepMigrationServer : NSObject <ATXUserEducationSuggestionModeChangeObserver>

 {
    ATXUserEducationSuggestionConnector *_connector;
    ATXInstalledSuggestedPagesTracker *_installedSuggestedPagesTracker;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
}




-(id)initWithConnector:(id)arg0 ;
-(void)dealloc;
-(void)processModeChangeEvent:(id)arg0 ;
-(void)sendSuggestion:(id)arg0 withEventType:(NSUInteger)arg1 ;


@end


#endif