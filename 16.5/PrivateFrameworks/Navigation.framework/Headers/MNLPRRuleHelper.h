// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNLPRRULEHELPER_H
#define MNLPRRULEHELPER_H


#import <Foundation/Foundation.h>


@interface MNLPRRuleHelper : NSObject



-(id)workQueue;
-(void)_findResourceNamesForRegions:(id)arg0 forceUpdate:(BOOL)arg1 asyncCompletion:(id)arg2 ;
-(void)_loadRules:(id)arg0 asyncCompletion:(id)arg1 ;
-(void)fetchRulesForWaypoints:(id)arg0 forceUpdateManifest:(BOOL)arg1 forceUpdateRules:(BOOL)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)prefetchRulesForWaypoints:(id)arg0 ;


@end


#endif