// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSTATE_H
#define MNNAVIGATIONSTATE_H


#import <Foundation/Foundation.h>

#import "MNLocationProviderCLParameters.h"
#import "MNSimulationLocationProvider.h"
#import "MNNavigationStateManager.h"
#import "MNNavigationTraceManager.h"

@interface MNNavigationState : NSObject

@property (readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property (readonly, nonatomic) NSUInteger desiredLocationProviderType;
@property (readonly, nonatomic) CGFloat locationUpdateInterval; // ivar: _locationUpdateInterval
@property (readonly, nonatomic) BOOL requiresHighMemoryThreshold;
@property (readonly, nonatomic) BOOL requiresLocationAccess;
@property (readonly, nonatomic) BOOL shouldClearStoredRoutes;
@property (readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;
@property (readonly, weak, nonatomic) MNNavigationStateManager *stateManager; // ivar: _stateManager
@property (readonly, nonatomic) CGFloat suggestionUpdateFrequency; // ivar: _suggestionUpdateFrequency
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property (readonly, nonatomic) NSUInteger type;


-(BOOL)_isSelectorValidForForwarding:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithStateManager:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)changeUserOptions:(id)arg0 ;
-(void)dealloc;
-(void)enterState;
-(void)forwardInvocation:(id)arg0 ;
-(void)leaveState;
-(void)postEnterState;
-(void)preEnterState;


@end


#endif