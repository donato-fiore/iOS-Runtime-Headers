// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDONBOARDINGCOMPLETIONMANAGER_H
#define HDONBOARDINGCOMPLETIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDOnboardingCompletionManager : NSObject {
    HDProfile *_profile;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}




-(BOOL)insertCodableOnboardingCompletions:(id)arg0 syncProvenance:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)insertOnboardingCompletion:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetOnboardingCompletionsForFeature:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)registerObserver:(id)arg0 featureIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 featureIdentifier:(id)arg1 ;


@end


#endif