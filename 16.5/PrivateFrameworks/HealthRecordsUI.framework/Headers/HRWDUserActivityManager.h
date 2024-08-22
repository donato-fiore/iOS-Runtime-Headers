// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRWDUSERACTIVITYMANAGER_H
#define HRWDUSERACTIVITYMANAGER_H

@class UIViewController, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_HRWDActivityNode.h"

@interface HRWDUserActivityManager : NSObject {
    UIViewController *_rootViewController;
    _HRWDActivityNode *_topNode;
    _HRWDActivityNode *_currentNode;
    NSMutableDictionary *_indexedActivities;
}


@property (readonly, nonatomic) NSMutableArray *policies; // ivar: _policies
@property (nonatomic) BOOL recordActivities; // ivar: _recordActivities


-(BOOL)_restoreActivityFromPolicies:(id)arg0 ;
-(id)_castleRockSpotlightBreadcrumbs:(id)arg0 ;
-(id)_handoffActivityBreadcrumbsForOnboarding:(id)arg0 ;
-(id)_handoffActivityBreadcrumbsForSampleType:(id)arg0 ;
-(id)_userActivityWithType:(id)arg0 ;
-(id)init;
-(void)_resetActivities;
-(void)_restoreFromActivityChain:(id)arg0 ;
-(void)_setCurrentNodeToResponder:(id)arg0 ;
-(void)_userActivityWithTitle:(id)arg0 keywords:(id)arg1 activityType:(id)arg2 ;
-(void)addPolicy:(id)arg0 ;
-(void)changeActivityForResponder:(id)arg0 activityDictionary:(id)arg1 title:(id)arg2 keywords:(id)arg3 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)restoreFromUserActivity:(id)arg0 ;
-(void)setRootViewController:(id)arg0 ;
-(void)transitionActivityForResponder:(id)arg0 newResponder:(id)arg1 transitionDictionary:(id)arg2 ;


@end


#endif