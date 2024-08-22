// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXELEMENTFETCHER_H
#define AXELEMENTFETCHER_H

@class NSArray, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, AXElementFetcherDelegate;

#import <Foundation/Foundation.h>

#import "AXElementGroupPruner.h"
#import "AXElementGroup.h"
#import "AXElement.h"
#import "AXVisualElementGrouper.h"

@interface AXElementFetcher : NSObject {
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    NSObject<OS_dispatch_queue> *_filterAccessQueue;
    *__AXObserver _axRuntimeNotificationObserver;
    NSUInteger _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    AXElementGroupPruner *_elementGroupPruner;
}


@property (nonatomic) NSUInteger activeFetchEvents; // ivar: _activeFetchEvents
@property (readonly, nonatomic) NSArray *availableElements;
@property (retain, nonatomic) NSArray *currentApps; // ivar: _currentApps
@property (retain, nonatomic) NSArray *customCurrentApps; // ivar: _customCurrentApps
@property (weak, nonatomic) NSObject<AXElementFetcherDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didSendFakeScreenChangeOnLastFetch; // ivar: _didSendFakeScreenChangeOnLastFetch
@property (retain, nonatomic) NSArray *elementCache; // ivar: _elementCache
@property (readonly, nonatomic) AXElementGroup *elementCommunityGroup;
@property (retain, nonatomic) AXElementGroup *elementCommunityGroupCache; // ivar: _elementCommunityGroupCache
@property (readonly, nonatomic) AXElementGroupPruner *elementGroupPruner;
@property (nonatomic) NSInteger elementGroupingHeuristics; // ivar: _elementGroupingHeuristics
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isEventManagementEnabled) BOOL eventManagementEnabled; // ivar: _eventManagementEnabled
@property (retain, nonatomic) NSMapTable *fetchObservers; // ivar: _fetchObservers
@property (nonatomic, getter=isFetchingElements) BOOL fetchingElements; // ivar: _fetchingElements
@property (readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property (nonatomic, getter=isGroupingEnabled) BOOL groupingEnabled; // ivar: _groupingEnabled
@property (readonly, nonatomic) AXElementGroup *keyboardGroup;
@property (retain, nonatomic) AXElementGroup *keyboardGroupCache; // ivar: _keyboardGroupCache
@property (readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property (readonly, nonatomic) AXElement *nativeFocusElement;
@property (retain, nonatomic) NSMutableDictionary *postFetchFilters; // ivar: _postFetchFilters
@property (readonly, nonatomic) AXElementGroup *rootGroup;
@property (retain, nonatomic) AXElementGroup *rootGroupCache; // ivar: _rootGroupCache
@property (nonatomic) BOOL shouldIncludeNonScannerElements; // ivar: _shouldIncludeNonScannerElements
@property (retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // ivar: _visualElementGrouper
@property (readonly, nonatomic) BOOL willFetchElements;


+(id)springBoardElement;
+(id)systemWideElement;
-(BOOL)_fetchElements:(BOOL)arg0 ;
-(BOOL)_fetchEventCanBeManaged:(NSUInteger)arg0 ;
-(BOOL)_fetchGroups:(BOOL)arg0 ;
-(BOOL)_shouldConsiderCacheAsInvalid;
-(BOOL)_updateCurrentApps;
-(CGFloat)_delayForFetchEvent:(NSUInteger)arg0 ;
-(NSInteger)_priorityForFetchEvent:(NSUInteger)arg0 ;
-(id)_axNotificationsForManagedEvents;
-(id)_debugStringForFetchEvents:(NSUInteger)arg0 ;
-(id)_fetchUnprocessedAppGroups;
-(id)_fetchUnprocessedElements:(id)arg0 ;
-(id)_filterElements:(id)arg0 withFilter:(id)arg1 ;
-(id)_filterGroup:(id)arg0 withFilter:(id)arg1 ;
// -(id)_findElementsMatchingBlock:(id)arg0 internalRequest:(unk)arg1  ;
// -(id)_findGroupableMatchingBlock:(id)arg0 inElementGroup:(unk)arg1  ;
-(id)_findGroupableMatchingGroupable:(id)arg0 inElementGroup:(id)arg1 ;
-(id)_groupWithDictionary:(id)arg0 currentPid:(int)arg1 ;
-(id)_groupWithItems:(id)arg0 groupTraits:(NSUInteger)arg1 scanningBehaviorTraits:(NSUInteger)arg2 label:(id)arg3 identifier:(id)arg4 currentPid:(int)arg5 ;
-(id)_processAppGroup:(id)arg0 keyboardGroup:(*id)arg1 ;
-(id)_siblingOfGroupable:(id)arg0 forDirection:(BOOL)arg1 didWrap:(*BOOL)arg2 ;
-(id)closestElementToElement:(id)arg0 ;
-(id)closestElementToPoint:(struct CGPoint )arg0 ;
-(id)description;
-(id)findElementMatchingBlock:(id)arg0 ;
-(id)findElementMatchingElement:(id)arg0 ;
-(id)findElementsMatchingBlock:(id)arg0 ;
-(id)findGroupableMatchingBlock:(id)arg0 ;
-(id)findGroupableMatchingGroupable:(id)arg0 ;
-(id)firstElement;
-(id)initWithDelegate:(id)arg0 fetchEvents:(NSUInteger)arg1 enableEventManagement:(BOOL)arg2 enableGrouping:(BOOL)arg3 shouldIncludeNonScannerElements:(BOOL)arg4 beginEnabled:(BOOL)arg5 ;
-(id)lastElement;
-(id)nextSiblingOfElement:(id)arg0 didWrap:(*BOOL)arg1 ;
-(id)nextSiblingOfGroupable:(id)arg0 didWrap:(*BOOL)arg1 ;
-(id)previousSiblingOfElement:(id)arg0 didWrap:(*BOOL)arg1 ;
-(id)previousSiblingOfGroupable:(id)arg0 didWrap:(*BOOL)arg1 ;
-(void)_debugLogElementCache;
-(void)_fetchEventOccurred:(NSUInteger)arg0 ;
-(void)_handleApplicationWasActivated:(id)arg0 ;
-(void)_handleMediaDidBegin:(struct __CFData *)arg0 ;
-(void)_handleNativeFocusItemDidChange:(struct __CFData *)arg0 ;
-(void)_handleScreenWillChange:(struct __CFData *)arg0 ;
-(void)_handleUpdateElementVisuals:(struct __CFData *)arg0 ;
-(void)_notifyObserversApplicationWasActivated:(id)arg0 ;
-(void)_notifyObserversDidFetchElementsForEvent:(NSUInteger)arg0 foundNewElements:(BOOL)arg1 ;
-(void)_notifyObserversDidScheduleFetchEvent:(NSUInteger)arg0 ;
-(void)_notifyObserversMediaDidBegin:(struct __CFData *)arg0 ;
-(void)_notifyObserversNativeFocusElementDidChange:(id)arg0 ;
-(void)_notifyObserversScreenWillChange:(struct __CFData *)arg0 ;
-(void)_notifyObserversUpdateElementVisuals:(id)arg0 ;
-(void)_notifyObserversWillFetchElementsForEvent:(NSUInteger)arg0 ;
-(void)_scheduleFetchEvent:(NSUInteger)arg0 ;
-(void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg0 orElements:(id)arg1 appsDidChange:(BOOL)arg2 ;
-(void)_setCurrentApplications:(id)arg0 ;
-(void)_tearDownEventCoalesceTimer;
-(void)addFetchEvents:(NSUInteger)arg0 ;
// -(void)addPostFetchFilter:(id)arg0 withIdentifier:(unk)arg1  ;
-(void)clearCache;
-(void)dealloc;
-(void)disableEventManagement;
-(void)enableEventManagement;
-(void)fetchEventOccurred:(NSUInteger)arg0 ;
-(void)refresh;
-(void)registerFetchObserver:(id)arg0 targetQueue:(id)arg1 ;
-(void)removeAllPostFetchFilters;
-(void)removeFetchEvents:(NSUInteger)arg0 ;
-(void)removePostFetchFilterWithIdentifier:(id)arg0 ;
-(void)unregisterAllFetchObservers;
-(void)unregisterFetchObserver:(id)arg0 ;


@end


#endif