// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSAPPFOCUSCONFIGURATIONCOORDINATOR_H
#define DNDSAPPFOCUSCONFIGURATIONCOORDINATOR_H

@class NSMutableDictionary, NSString;
@protocol DNDSAppConfigurationManagerDelegate, OS_dispatch_queue, DNDSAppFocusConfigurationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "DNDSAppConfigurationManager.h"
#import "DNDSXPCEventPublisher.h"

@interface DNDSAppFocusConfigurationCoordinator : NSObject <DNDSAppConfigurationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_groupDetails;
    DNDSAppConfigurationManager *_appConfigurationManager;
    DNDSXPCEventPublisher *_xpcEventPublisher;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSAppFocusConfigurationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_removeTask:(id)arg0 fromGroupWithIdentifier:(id)arg1 ;
-(BOOL)_shouldExecuteActionOnApplicationWithBundleIdentifier:(id)arg0 ;
-(id)_currentModeIdentifier;
-(id)_groupIdentifierForStateUpdate:(id)arg0 ;
-(id)initWithAppConfigurationManager:(id)arg0 xpcEventPublisher:(id)arg1 ;
-(void)_addTask:(id)arg0 toGroupWithIdentifier:(id)arg1 ;
-(void)_executeAction:(id)arg0 orActionIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 modeIdentifier:(id)arg3 groupIdentifier:(id)arg4 exiting:(BOOL)arg5 metadataProvider:(id)arg6 ;
-(void)_executeAction:(id)arg0 withBundleIdentifier:(id)arg1 modeIdentifier:(id)arg2 groupIdentifier:(id)arg3 ;
-(void)_groupWithIdentifierCompleted:(id)arg0 ;
-(void)_incrementTasksExecutedForGroupWithIdentifier:(id)arg0 ;
-(void)appConfigurationManager:(id)arg0 didClearActionWithIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 ;
-(void)appConfigurationManager:(id)arg0 didClearActionsForAppsInModeIdentifiers:(id)arg1 ;
-(void)appConfigurationManager:(id)arg0 didSetAction:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 ;
-(void)handleStateUpdate:(id)arg0 ;


@end


#endif