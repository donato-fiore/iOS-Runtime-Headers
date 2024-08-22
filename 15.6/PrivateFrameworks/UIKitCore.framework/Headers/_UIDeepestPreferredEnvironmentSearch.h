// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEEPESTPREFERREDENVIRONMENTSEARCH_H
#define _UIDEEPESTPREFERREDENVIRONMENTSEARCH_H


#import <Foundation/Foundation.h>

#import "_UIDebugLogReport.h"

@interface _UIDeepestPreferredEnvironmentSearch : NSObject

@property (nonatomic) BOOL allowsFocusRestoration; // ivar: _allowsFocusRestoration
@property (retain, nonatomic) _UIDebugLogReport *debugReport; // ivar: _debugReport


-(id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg0 visitedFocusEnvironments:(id)arg1 ;
-(id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg0 ;
-(id)deepestPreferredFocusableItemForEnvironment:(id)arg0 withRequest:(id)arg1 ;
-(void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg0 source:(id)arg1 ;
-(void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg0 ;
-(void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg0 result:(NSInteger)arg1 ;
-(void)_reportFoundFocusableItem:(id)arg0 ;
-(void)_reportSearchingEnvironment:(id)arg0 ;
-(void)_reportStartingSearch;


@end


#endif