// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MECONTENTRULELISTMANAGER_H
#define MECONTENTRULELISTMANAGER_H

@class EFLocked, EFCancelationToken, NSHashTable, EFDebouncer;
@protocol MEAppExtensionsObserver, EFAssertableScheduler;

#import <Foundation/Foundation.h>

#import "MEAppExtensionsController.h"

@interface MEContentRuleListManager : NSObject <MEAppExtensionsObserver>

 {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
    EFLocked *_activeRuleListsByIdentifier;
    NSHashTable *_observers;
    id<EFAssertableScheduler> *_observationScheduler;
    os_unfair_lock_s _lock;
    EFDebouncer *_reloadDebouncer;
}




+(id)log;
-(id)_activeRuleLists;
-(id)_encodedContentRuleListForExtension:(id)arg0 ;
-(id)addObserver:(id)arg0 activeRuleLists:(*id)arg1 ;
-(id)init;
-(id)initWithExtensionsController:(id)arg0 ;
-(void)_compileAndAddContentRuleListForIdentifier:(id)arg0 encodedContentRuleList:(id)arg1 ;
-(void)_handleExtensionsAdded:(id)arg0 ;
-(void)_handleExtensionsRemoved:(id)arg0 ;
-(void)_notifyObserversOfNewContentRuleList:(id)arg0 ;
-(void)_notifyObserversOfRemovedContentRuleList:(id)arg0 ;
-(void)_notifyObserversOfUpdatedContentRuleList:(id)arg0 oldContentRuleList:(id)arg1 ;
-(void)_reloadContentRuleLists;
-(void)_scheduleContentRuleListReload;
-(void)dealloc;
-(void)extensionsMatched:(id)arg0 ;
-(void)extensionsNoLongerMatching:(id)arg0 ;


@end


#endif