// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDAILYROUTINESPERSONALIZATIONMANAGER_H
#define ATXDAILYROUTINESPERSONALIZATIONMANAGER_H

@protocol ATXLocationOfInterestManagerProtocol;

#import <Foundation/Foundation.h>

#import "ATXContextualActionManager.h"

@interface ATXDailyRoutinesPersonalizationManager : NSObject {
    ATXContextualActionManager *_actionManager;
    id<ATXLocationOfInterestManagerProtocol> *_loiManager;
}




+(id)_filterActions:(id)arg0 havingCounts:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 havingMinOccurrences:(NSUInteger)arg6 ;
+(id)_filterUnpackedActions:(id)arg0 ;
+(id)_rankActions:(id)arg0 havingCounts:(id)arg1 ;
+(id)_unpackMostFrequentActionParameters:(id)arg0 havingCounts:(id)arg1 limit:(NSUInteger)arg2 ;
+(id)sharedInstance;
-(BOOL)_allRequiredActionTypesPresent:(id)arg0 minOccurrences:(NSUInteger)arg1 forContext:(id)arg2 ;
-(BOOL)_enoughActionHistory;
-(BOOL)shouldDisplayDailyRoutineForContext:(id)arg0 ;
-(id)_getMostFrequentActionsForContext:(id)arg0 includeBundleIds:(id)arg1 excludeBundleIds:(id)arg2 includeActionTypes:(id)arg3 excludeActionTypes:(id)arg4 minOccurrences:(NSUInteger)arg5 limit:(NSUInteger)arg6 ;
-(id)getActionPredictionsForContext:(id)arg0 includeBundleIds:(id)arg1 excludeBundleIds:(id)arg2 includeActionTypes:(id)arg3 excludeActionTypes:(id)arg4 limit:(NSUInteger)arg5 ;
-(id)init;
-(id)initWithFakeActions:(id)arg0 loiManager:(id)arg1 ;


@end


#endif