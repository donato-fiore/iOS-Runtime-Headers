// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSYSTEMFOCUSCONFIGURATIONCOORDINATOR_H
#define DNDSSYSTEMFOCUSCONFIGURATIONCOORDINATOR_H

@class NSMapTable, NSString;
@protocol WFShojiSystemActionsRunnerClientDelegate, DNDSAppConfigurationManagerDelegate, OS_dispatch_queue, DNDSSystemFocusConfigurationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "DNDSAppConfigurationManager.h"

@interface DNDSSystemFocusConfigurationCoordinator : NSObject <WFShojiSystemActionsRunnerClientDelegate, DNDSAppConfigurationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    DNDSAppConfigurationManager *_appConfigurationManager;
    NSMapTable *_clientToModeIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSSystemFocusConfigurationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentModeIdentifier;
-(id)initWithAppConfigurationManager:(id)arg0 ;
-(void)_executeAction:(id)arg0 ;
-(void)appConfigurationManager:(id)arg0 didClearSystemAction:(id)arg1 modeIdentifier:(id)arg2 ;
-(void)appConfigurationManager:(id)arg0 didClearSystemActionsInModeIdentifiers:(id)arg1 ;
-(void)appConfigurationManager:(id)arg0 didSetSystemAction:(id)arg1 modeIdentifier:(id)arg2 ;
-(void)handleStateUpdate:(id)arg0 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningAction:(id)arg1 withReverseAction:(id)arg2 ;


@end


#endif