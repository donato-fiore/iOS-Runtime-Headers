// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCOMPONENTMANAGER_H
#define TSPCOMPONENTMANAGER_H

@class NSHashTable, NSMapTable, NSCache, NSString;
@protocol TSPComponentDelegate, TSPObjectModifyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPComponent.h"
#import "TSPObjectContext.h"

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>

 {
    uint8_t _ignoreCachedObjectEvictionCount;
    BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
}


@property (readonly, nonatomic) NSUInteger componentCount;
@property (readonly, weak, nonatomic) TSPObjectContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPComponent *documentComponent;
@property (readonly, nonatomic) TSPComponent *documentMetadataComponent;
@property (readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDocumentComponentTreeModified;
@property (readonly, nonatomic) BOOL isSupportComponentTreeModified;
@property (readonly, nonatomic) TSPComponent *packageMetadataComponent; // ivar: _packageMetadataComponent
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSPComponent *supportComponent;
@property (readonly, nonatomic) TSPComponent *supportMetadataComponent;
@property (readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property (retain) TSPComponent *viewStateComponent;


+(id)componentManagersPerformingCacheOperationOnCurrentThread;
-(BOOL)isActive;
-(BOOL)isPerformingCacheOperation;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(NSUInteger)objectTargetType;
-(id)componentForRootObjectIdentifier:(NSInteger)arg0 ;
-(id)componentForRootObjectOfLazyReference:(id)arg0 ;
-(id)componentForRootObjectOfLazyReferenceImpl:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)rootComponentForPackageIdentifier:(unsigned char)arg0 ;
-(id)rootComponentWithIdentifierImpl:(NSInteger)arg0 locator:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)cacheComponent:(id)arg0 isDiscardingContent:(BOOL)arg1 ;
-(void)componentForRootObjectIdentifier:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)componentForRootObjectOfLazyReference:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)continueCacheOperationUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)didModifyFlushedComponent:(id)arg0 forObject:(id)arg1 ;
-(void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg0 ;
-(void)dirtyComponents:(id)arg0 ;
-(void)discardOrphanedComponents;
-(void)endIgnoringCachedObjectEviction;
-(void)enumerateComponents:(id)arg0 ;
-(void)evictAllCachedObjects;
-(void)flushComponent:(id)arg0 isDiscardingContent:(BOOL)arg1 ;
-(void)loadComponent:(*void)arg0 package:(id)arg1 ;
-(void)loadFromPackage:(id)arg0 metadata:(id)arg1 ;
-(void)performCacheOperationUsingBlock:(id)arg0 ;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)retrieveOrCreateComponentForRootObject:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)tearDown;
-(void)traverseComponentTreeFromRoot:(id)arg0 accessor:(id)arg1 ;
-(void)willModifyObject:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif