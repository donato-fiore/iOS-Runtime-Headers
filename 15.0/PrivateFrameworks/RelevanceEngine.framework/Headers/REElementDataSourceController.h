// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REELEMENTDATASOURCECONTROLLER_H
#define REELEMENTDATASOURCECONTROLLER_H

@class NSString, NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray, NSSet;
@protocol REElementDataSourceControllerProperties, REElementDataSourceDelegate, OS_dispatch_queue, REElementDataSourceControllerDelegate;

#import <Foundation/Foundation.h>

#import "REUpNextScheduler.h"
#import "RERelevanceProviderEnvironment.h"
#import "RERelevanceEngine.h"
#import "REElementDataSource.h"

@interface REElementDataSourceController : NSObject <REElementDataSourceControllerProperties, REElementDataSourceDelegate>

 {
    NSString *_loggingHeader;
    NSMutableSet *_dataSourceElements;
    NSMutableDictionary *_dataSourceElementSectionMap;
    NSMutableDictionary *_dataSourceElementIdentifierMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updates;
    REUpNextScheduler *_updateScheduler;
    REUpNextScheduler *_reloadScheduler;
    BOOL _wantsReloadWhilePaused;
    NSArray *_sectionsToReloadWhilePaused;
    BOOL _hasDataAvailable;
    NSUInteger _contentMode;
    BOOL _isPerformingReload;
    NSMutableArray *_enqueuedBlocks;
    NSSet *_supportedSections;
    RERelevanceProviderEnvironment *_providerEnvironment;
    RERelevanceEngine *_relevanceEngine;
    BOOL _willUnload;
    BOOL _allowsLocationUse;
    BOOL _supportsContentRelevance;
    NSArray *_contentAttributes;
    int _boostCount;
    BOOL _disableAutomaticContentManagement;
}


@property (readonly, nonatomic) NSArray *allElements;
@property (readonly, nonatomic) NSArray *allProvidedElements;
@property (readonly, nonatomic) BOOL allowsLocationUse;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) REElementDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) Class dataSourceClass;
@property (readonly, nonatomic) Class dataSourceClass; // ivar: _dataSourceClass
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REElementDataSourceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDataAvailable;
@property (readonly, nonatomic) BOOL hasLoadedData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedSections;
@property (readonly, nonatomic) NSUInteger updateCount;


-(BOOL)_containsElementIdentifier:(id)arg0 ;
-(BOOL)_isWhitelisted;
-(BOOL)_supportsContentRelevanceProviderForElement:(id)arg0 ;
-(BOOL)_validElement:(id)arg0 ;
-(BOOL)hasElementWithId:(id)arg0 inSection:(NSUInteger)arg1 ;
-(BOOL)hasElementWithId:(id)arg0 inSectionWithIdentifier:(id)arg1 ;
-(id)_allDataSourceElements;
-(id)_dataSourceIdentifierFromIdentifier:(id)arg0 ;
-(id)_elementForIdentifier:(id)arg0 ;
-(id)_elementsByRemovingInvalidElements:(id)arg0 ;
-(id)_groupElements:(id)arg0 bySections:(id)arg1 ;
-(id)_initWithRelevanceEngine:(id)arg0 dataSourceClass:(Class)arg1 dataSource:(id)arg2 ;
-(id)_queue_elementsForIds:(id)arg0 ;
-(id)_sectionForElementWithIdentifier:(id)arg0 ;
-(id)_shallowCopiedElements:(id)arg0 ;
-(id)_updateRelevanceProvidersForElement:(id)arg0 ;
-(id)elementOperationQueue;
-(id)initWithRelevanceEngine:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg0 dataSourceClass:(Class)arg1 ;
-(unsigned int)_defaultDataSourceQOS;
-(void)_addElementIdentifier:(id)arg0 ;
-(void)_handleDeviceLockStateChange:(id)arg0 ;
-(void)_handleSignifiantTimeChange:(id)arg0 ;
-(void)_loadLoggingHeader;
-(void)_namespaceElementIdentifier:(id)arg0 section:(id)arg1 ;
-(void)_performOrEnqueueUpdateBlock:(id)arg0 ;
-(void)_queue_invalidateSections:(id)arg0 completion:(id)arg1 ;
-(void)_queue_pause;
-(void)_queue_performContentInvalidateWithElement:(id)arg0 expectation:(id)arg1 sections:(id)arg2 ;
-(void)_queue_performUpdates;
-(void)_queue_processPendingUpdatesWhilePause:(id)arg0 ;
-(void)_queue_processUpdates:(id)arg0 forSection:(id)arg1 ;
-(void)_queue_purgeContentWithCompletion:(id)arg0 ;
-(void)_queue_reloadWithQOS:(unsigned int)arg0 qosOffset:(int)arg1 forceReload:(BOOL)arg2 completion:(id)arg3 ;
// -(void)_queue_reloadWithQOS:(unsigned int)arg0 qosOffset:(int)arg1 forceReload:(BOOL)arg2 operations:(id)arg3 completion:(unk)arg4  ;
-(void)_queue_reloadWithQOS:(unsigned int)arg0 qosOffset:(int)arg1 forceReload:(BOOL)arg2 sections:(id)arg3 completion:(id)arg4 ;
-(void)_queue_resume;
-(void)_queue_scheduleUpdate:(id)arg0 ;
-(void)_queue_updateDataSourceLocationUse;
-(void)_removeElementForIdentifier:(id)arg0 ;
-(void)_removeElementIdentifier:(id)arg0 ;
-(void)_setSection:(id)arg0 forElementWithIdentifier:(id)arg1 ;
-(void)_storeElement:(id)arg0 ;
-(void)addElements:(id)arg0 toSection:(NSUInteger)arg1 ;
-(void)addElements:(id)arg0 toSectionWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)elementDidBecomeHidden:(id)arg0 ;
-(void)elementWillBecomeVisible:(id)arg0 ;
-(void)fetchElementWithIdentifierVisible:(id)arg0 withHandler:(id)arg1 ;
-(void)invalidateAndReloadWithCompletion:(id)arg0 ;
-(void)invalidateElements;
-(void)invalidateElementsInSection:(id)arg0 ;
-(void)invalidateElementsInSections:(id)arg0 completion:(id)arg1 ;
-(void)pause;
-(void)pauseIfNeeded;
-(void)prepareToUnload;
-(void)processPendingUpdatesWhilePause:(id)arg0 ;
-(void)refreshElement:(id)arg0 ;
-(void)reloadElement:(id)arg0 ;
-(void)removeElements:(id)arg0 fromSection:(NSUInteger)arg1 ;
-(void)removeElementsWithIds:(id)arg0 ;
-(void)resume;


@end


#endif