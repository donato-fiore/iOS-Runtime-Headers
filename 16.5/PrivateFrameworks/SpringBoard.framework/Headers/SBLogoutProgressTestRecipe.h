// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOGOUTPROGRESSTESTRECIPE_H
#define SBLOGOUTPROGRESSTESTRECIPE_H

@class NSMutableArray, NSString, NSArray, NSDictionary;
@protocol SBLogoutProgressDataSource, SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBLogoutProgressTransientOverlayViewController.h"

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>

 {
    NSMutableArray *_tasks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController; // ivar: _logoutProgressTransientOverlayViewController
@property (copy, nonatomic) NSArray *remainingApplications; // ivar: _remainingApplications
@property (retain, nonatomic) NSDictionary *remainingBlockingTasks; // ivar: _remainingBlockingTasks
@property (readonly) Class superclass;


-(id)_defaultBlockingTasks;
-(id)_defaultPendingApplications;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg0 ;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg0 ;
-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif