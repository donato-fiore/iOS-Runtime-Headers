// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXCODELOADER_H
#define AXCODELOADER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol AXImageMonitorObserver, AXImageMonitor, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AXCodeLoader : NSObject <AXImageMonitorObserver>

 {
    id<AXImageMonitor> *_imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    NSInteger _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    NSMutableDictionary *_codeItemsByNameType;
    id *_beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    BOOL _initialLoadHasOccurred;
    BOOL _initialLoadHasFinished;
    NSString *_currentPlatformKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didLoadAccessibilityCodeItemBlock; // ivar: _didLoadAccessibilityCodeItemBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInitialLoadFinished;
@property (readonly, nonatomic) BOOL isTrackingLoadedCodeItems;
@property (copy, nonatomic) id *loadEventDidOccurBlock; // ivar: _loadEventDidOccurBlock
@property (copy, nonatomic) id *loadEventWillOccurBlock; // ivar: _loadEventWillOccurBlock
@property (nonatomic) BOOL shouldAutoloadAccessibilityCodeItems; // ivar: _shouldAutoloadAccessibilityCodeItems
@property (copy, nonatomic) id *shouldLoadAccessibilityCodeItemBlock; // ivar: _shouldLoadAccessibilityCodeItemBlock
@property (readonly) Class superclass;
@property (nonatomic) NSInteger trackingMode; // ivar: _trackingMode


+(id)defaultLoader;
-(id)_accessibilityBundleMapURLs;
-(id)_accessibilityCodeItemMatchingName:(id)arg0 type:(NSInteger)arg1 path:(id)arg2 ;
-(id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg0 ;
-(id)_platformKeyForPlatform:(unsigned int)arg0 ;
-(id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)arg0 ;
-(id)_stateDescForItem:(id)arg0 ;
-(id)_validDidLoadAccessibilityCodeItemBlock:(SEL)arg0 ;
-(id)_validLoadEventDidOccurBlock:(SEL)arg0 ;
-(id)_validLoadEventWillOccurBlock:(SEL)arg0 ;
-(id)_validShouldLoadAccessibilityCodeItemBlock:(SEL)arg0 ;
-(id)accessibilityCodeItemDefinitions;
-(id)codeItemForBundle:(id)arg0 ;
-(id)init;
-(id)initWithImageMonitor:(id)arg0 ;
-(id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(BOOL)arg0 ;
-(id)loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)arg0 ;
-(id)recomputedCodeItemsForAllFrameworks;
-(id)recomputedCodeItemsForLoadedAccessibilityBundles;
-(id)rogueAccessibilityCodeItems;
-(id)trackedCodeItems;
-(void)_addTrackedCodeItem:(id)arg0 ;
-(void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg0 ;
-(void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
-(void)_cancelDyldImageActivityTimer;
-(void)_consumeBeginTrackingCompletionHandlerIfNeeded;
-(void)_initializeCodeItemMappings;
-(void)_loadAccessibilityCodeItems;
-(void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
-(void)_scheduleDyldImageActivityTimerWithDelay:(CGFloat)arg0 ;
-(void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
// -(void)beginTrackingLoadedCodeItemsWithMode:(NSInteger)arg0 completion:(id)arg1 targetQueue:(unk)arg2  ;
// -(void)endTrackingLoadedCodeItemsWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
-(void)imageMonitor:(id)arg0 didAddImage:(id)arg1 ;
-(void)iterateInitialImageListForImageMonitor:(id)arg0 ;
-(void)logLoaderState;
// -(void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
-(void)queryAccessibilityBundleIsLoadedWithName:(id)arg0 completion:(id)arg1 ;
-(void)setAccessibilityCodeItemsNeedLoaded;


@end


#endif