// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDIDLETIMERCONTROLLER_H
#define SBDASHBOARDIDLETIMERCONTROLLER_H

@class CSCoverSheetViewController, NSString;
@protocol CSExternalEventHandling, SBDashBoardIdleTimerProviderDelegate, CSIdleTimerControlling, SBIdleTimerProviding, SBLockScreenIdleTimerControlling, SBIdleTimerCoordinating;

#import <Foundation/Foundation.h>

#import "SBDashBoardIdleTimerProvider.h"

@interface SBDashBoardIdleTimerController : NSObject <CSExternalEventHandling, SBDashBoardIdleTimerProviderDelegate, CSIdleTimerControlling, SBIdleTimerProviding, SBLockScreenIdleTimerControlling>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardIdleTimerProvider *_dashBoardIdleTimerProvider;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)dashBoardIdleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 reason:(id)arg2 ;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(id)requestIdleTimerBehaviorForReason:(id)arg0 ;
-(void)addIdleTimerDisabledAssertionReason:(id)arg0 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)idleTimerDidChange:(id)arg0 ;
-(void)idleTimerDidExpire:(id)arg0 ;
-(void)idleTimerDidRefresh:(id)arg0 ;
-(void)idleTimerDidWarn:(id)arg0 ;
-(void)idleTimerWillRefresh:(id)arg0 ;
-(void)removeIdleTimerDisabledAssertionReason:(id)arg0 ;
-(void)resetIdleTimerIfTopMost;


@end


#endif