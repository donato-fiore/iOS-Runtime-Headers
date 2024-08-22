// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFOCUSCONTROLLER_H
#define EMFOCUSCONTROLLER_H

@class NSHashTable;
@protocol EFAssertableScheduler, EFCancelable;

#import <Foundation/Foundation.h>

#import "EMFocus.h"

@interface EMFocusController : NSObject {
    NSHashTable *_observers;
    id<EFAssertableScheduler> *_observationScheduler;
    id<EFCancelable> *_observationToken;
    EMFocus *_currentFocus;
    os_unfair_lock_s _lock;
}




+(id)predicateForFocus:(id)arg0 usingAccountRepository:(id)arg1 ;
+(id)updatedPredicateForFocus:(id)arg0 currentPredicate:(id)arg1 usingAccountRepository:(id)arg2 ;
-(id)_currentFocusedAccountIdentifiers;
-(id)addObserver:(id)arg0 currentFocus:(*id)arg1 ;
-(id)init;
-(void)_focusModeChanged;
-(void)getCurrentFocus:(id)arg0 ;


@end


#endif