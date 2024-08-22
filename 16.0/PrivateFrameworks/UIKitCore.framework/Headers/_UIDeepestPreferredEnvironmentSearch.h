// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEEPESTPREFERREDENVIRONMENTSEARCH_H
#define _UIDEEPESTPREFERREDENVIRONMENTSEARCH_H


#import <Foundation/Foundation.h>

#import "_UIDebugLogNode.h"

@interface _UIDeepestPreferredEnvironmentSearch : NSObject

@property (nonatomic) BOOL allowsOverridingPreferedFocusEnvironments; // ivar: _allowsOverridingPreferedFocusEnvironments
@property (retain, nonatomic) _UIDebugLogNode *debugLog; // ivar: _debugLog


-(id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg0 visitedFocusEnvironments:(id)arg1 ;
-(id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg0 ;
-(id)deepestPreferredFocusableItemForEnvironment:(id)arg0 withRequest:(id)arg1 ;
-(void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg0 source:(id)arg1 ;
-(void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg0 ;
-(void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg0 result:(NSInteger)arg1 ;
-(void)_reportFoundFocusableItem:(id)arg0 inContext:(id)arg1 ;
-(void)_reportStartingSearch;


@end


#endif