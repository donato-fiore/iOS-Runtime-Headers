// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBPROCESSMONITOR_H
#define DBPROCESSMONITOR_H

@class NSString, NSMapTable, CARObserverHashTable, CRCarPlayAppPolicyEvaluator, RBSProcessMonitor;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface DBProcessMonitor : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMapTable *handleMapTable; // ivar: _handleMapTable
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator; // ivar: _policyEvaluator
@property (retain, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly) Class superclass;


-(id)init;
-(void)_appStateUpdated:(id)arg0 processHandle:(id)arg1 ;
-(void)_handleDeathWithIdentifier:(id)arg0 isCrash:(BOOL)arg1 pid:(int)arg2 ;
-(void)_startMonitoringProcess;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;


@end


#endif