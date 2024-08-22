// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDSETUPCONTROLLER_H
#define SBDASHBOARDSETUPCONTROLLER_H

@class CSCoverSheetViewController, NSString;
@protocol CSExternalBehaviorProviding, CSExternalEventHandling;

#import <Foundation/Foundation.h>

#import "SBSetupManager.h"
#import "SBDashBoardSetupViewController.h"

@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    SBSetupManager *_setupManager;
    SBDashBoardSetupViewController *_setupViewController;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)init;
-(id)initWithCoverSheetViewController:(id)arg0 setupManager:(id)arg1 ;
-(void)_addOrRemoveSetupViewIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_clearSetupViewIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_configureForCurrentSetupMode;
-(void)_setupModeChanged:(id)arg0 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSEventHandling;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;


@end


#endif