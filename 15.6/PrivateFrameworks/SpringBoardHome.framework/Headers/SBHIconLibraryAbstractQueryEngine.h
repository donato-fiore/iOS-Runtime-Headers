// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONLIBRARYABSTRACTQUERYENGINE_H
#define SBHICONLIBRARYABSTRACTQUERYENGINE_H

@class NSHashTable, NSString;
@protocol SBHIconLibraryQueryEngine, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBHIconModel.h"

@interface SBHIconLibraryAbstractQueryEngine : NSObject <SBHIconLibraryQueryEngine>

 {
    BOOL _iconModelIsReloading;
    NSHashTable *_executingQueryContexts;
    NSHashTable *_observers;
    BOOL _isShutdown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly, nonatomic) BOOL isShutdown;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly) Class superclass;


+(id)_leafIdentifiersForBundleIdentifier:(id)arg0 ;
-(BOOL)_processingQueue_isBundleIdentifierValid:(id)arg0 iconLibraryQueryContext:(id)arg1 ;
-(id)_processingQueue_lastQueryResultForContext:(id)arg0 ;
-(id)_processingQueue_sortComperatorForQueryContext:(SEL)arg0 ;
-(id)init;
-(id)initWithIconModel:(id)arg0 ;
-(void)_addItemsWithBundleIdentifiers:(id)arg0 iconLibraryQueryContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_iconModelDidReload:(id)arg0 ;
-(void)_iconModelNeedsIconAdded:(id)arg0 ;
-(void)_iconModelNeedsIconRemoved:(id)arg0 ;
-(void)_iconModelNeedsIconReplaced:(id)arg0 ;
-(void)_iconModelVisibilityDidChange:(id)arg0 ;
-(void)_iconModelWillReload:(id)arg0 ;
-(void)_mapBundleIdentifiersToIcons:(id)arg0 completion:(id)arg1 ;
-(void)_processingQueue_addIcons:(id)arg0 iconLibraryQueryContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_processingQueue_noteQueryResultsWereUpdated:(id)arg0 iconLibraryQueryContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_processingQueue_observerDispatchError:(id)arg0 forQuery:(id)arg1 ;
-(void)_processingQueue_observerDispatchQueryResultsWereUpdated:(id)arg0 ;
-(void)_processingQueue_removeItemsWithBundleIdentifiers:(id)arg0 iconLibraryQueryContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_processingQueue_startNewQueryContext:(id)arg0 ;
-(void)_processingQueue_teardownQueryContext:(id)arg0 ;
-(void)_processingQueue_teardownQueryContext:(id)arg0 removeContext:(BOOL)arg1 ;
-(void)_setupNotifications;
-(void)_teardownNotifications;
-(void)addObserver:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)shutdown;


@end


#endif