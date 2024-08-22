// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSTATETRACKINGCOMPOSITION_H
#define PLSTATETRACKINGCOMPOSITION_H

@class NSMutableDictionary, NSMutableArray, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLStateTrackingComposition : NSObject

@property (retain) NSMutableDictionary *entryKeyToStateMap; // ivar: _entryKeyToStateMap
@property (retain) NSMutableDictionary *executeBlockCache; // ivar: _executeBlockCache
@property NSUInteger stateChangeMask; // ivar: _stateChangeMask
@property (retain) NSMutableArray *stateChangeNotifications; // ivar: _stateChangeNotifications
@property (retain) NSMutableDictionary *stateIDToStateMap; // ivar: _stateIDToStateMap
@property (retain) NSDate *systemStateChangeTime; // ivar: _systemStateChangeTime
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
+(void)registerState:(Class)arg0 ;
-(BOOL)stateChanged:(NSUInteger)arg0 ;
-(id)getCurrState:(NSUInteger)arg0 ;
-(id)getLastState:(NSUInteger)arg0 ;
-(id)getState:(NSUInteger)arg0 beforeDate:(id)arg1 ;
-(id)getStateBeforeSystemStateChange:(NSUInteger)arg0 ;
-(id)getStateChangeTime:(NSUInteger)arg0 ;
-(id)getSystemStateChangeTime;
-(id)init;
-(void)handleStateChange:(id)arg0 ;
-(void)initializeState;
-(void)registerForListeners;
-(void)registerForStates:(NSUInteger)arg0 withOperator:(id)arg1 withBlock:(id)arg2 ;
-(void)triggerBlocks;


@end


#endif