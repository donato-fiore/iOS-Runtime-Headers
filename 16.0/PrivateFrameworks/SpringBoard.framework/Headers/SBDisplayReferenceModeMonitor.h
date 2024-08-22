// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYREFERENCEMODEMONITOR_H
#define SBDISPLAYREFERENCEMODEMONITOR_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface SBDisplayReferenceModeMonitor : NSObject {
    NSMutableDictionary *_displayToCachedStatus;
    NSMutableDictionary *_CADisplayIdentifierToObservers;
    NSMutableDictionary *_CADisplayIdentifierToFBSDisplayConfig;
    NSMutableSet *_observedDisplays;
}




+(BOOL)canAddObserverForDisplayWithConfiguration:(id)arg0 ;
-(BOOL)_shouldNotifyObserversOfReferenceModeStatusChangeForDisplay:(id)arg0 ;
-(NSInteger)_cachedStatusForDisplay:(id)arg0 ;
-(NSInteger)_referenceModeStatusForDisplay:(id)arg0 ;
-(NSInteger)referenceModeStatusForDisplayWithConfiguration:(id)arg0 ;
-(id)_configurationForDisplay:(id)arg0 ;
-(id)_displayForConfiguration:(id)arg0 ;
-(id)_observersForDisplay:(id)arg0 ;
-(void)_addObserver:(id)arg0 forDisplay:(id)arg1 ;
-(void)_enumerateObserversOfDisplay:(id)arg0 usingBlock:(id)arg1 ;
-(void)_removeCachedStatusForDisplay:(id)arg0 ;
-(void)_removeObserver:(id)arg0 forDisplay:(id)arg1 ;
-(void)_setCachedStatus:(NSInteger)arg0 forDisplay:(id)arg1 ;
-(void)_setConfig:(id)arg0 forDisplay:(id)arg1 ;
-(void)_startObservingDisplayIfNeeded:(id)arg0 ;
-(void)_stopObservingDisplay:(id)arg0 ;
-(void)addReferenceModeStatusObserver:(id)arg0 forDisplayWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeReferenceModeStatusObserver:(id)arg0 forDisplayWithConfiguration:(id)arg1 ;


@end


#endif