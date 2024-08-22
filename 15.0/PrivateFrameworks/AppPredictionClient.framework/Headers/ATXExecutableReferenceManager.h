// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXEXECUTABLEREFERENCEMANAGER_H
#define ATXEXECUTABLEREFERENCEMANAGER_H

@class NSString, NSMapTable;

#import <Foundation/Foundation.h>


@interface ATXExecutableReferenceManager : NSObject {
    NSString *_path;
    CGFloat _minDurationForTrackedReferencesToStayAround;
    NSMapTable *__cachedExecutableToReferenceMapForBatchUpdates;
    BOOL __cachedExecutableToReferenceMapNeedsWrite;
}




-(BOOL)_writeData:(id)arg0 ;
-(BOOL)canExecutableClearOnEngagement:(id)arg0 ;
-(BOOL)isExecutableHidden:(id)arg0 ;
-(NSUInteger)referenceCountForExecutable:(id)arg0 ;
-(id)_executablePairsForSuggestions:(id)arg0 clientModelId:(id)arg1 ;
-(id)_loadReferences;
-(id)_pairsForClientModelId:(id)arg0 map:(id)arg1 ;
-(id)_readData;
-(id)clientModelIdsForExecutable:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCacheDirectory:(id)arg0 minDurationForTrackedReferencesToStayAround:(CGFloat)arg1 ;
-(id)jsonDict;
-(id)referencesForClientModelId:(id)arg0 ;
-(void)_addExecutablePairs:(id)arg0 toMap:(id)arg1 ;
-(void)_purgeReferencesIfPossibleInMap:(id)arg0 forceWrite:(BOOL)arg1 ;
-(void)_writeReferences:(id)arg0 ;
-(void)addReferencesForSuggestions:(id)arg0 clientModelId:(id)arg1 ;
-(void)markReferenceAsHiddenForExecutable:(id)arg0 clientModelId:(id)arg1 untilDate:(id)arg2 ;
-(void)markReferencesAsPurgableFromClientModelIdIfPossible:(id)arg0 ;
-(void)performBatchUpdateOfReferencesWithBlock:(id)arg0 ;
-(void)purgeReferencesForSuggestions:(id)arg0 clientModelId:(id)arg1 ;
-(void)purgeReferencesIfPossible;
-(void)recordExecutable:(id)arg0 clientModelId:(id)arg1 shouldClearEngagement:(BOOL)arg2 ;
-(void)updateDateOfReferenceForExecutable:(id)arg0 clientModelId:(id)arg1 ;
-(void)updateReferencesForProactiveSuggestions:(id)arg0 clientModelId:(id)arg1 ;


@end


#endif