// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCORESIMULATE_H
#define SUCORESIMULATE_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreSimulateEvent.h"

@interface SUCoreSimulate : NSObject

@property (nonatomic) int alterationsPerformed; // ivar: _alterationsPerformed
@property (retain, nonatomic) NSDictionary *eventAlterations; // ivar: _eventAlterations
@property (retain, nonatomic) SUCoreSimulateEvent *lastAlteration; // ivar: _lastAlteration
@property (copy, nonatomic) id *registeredCallback; // ivar: _registeredCallback
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *simulateQueue; // ivar: _simulateQueue
@property (readonly, nonatomic) BOOL simulatorEnabled; // ivar: _simulatorEnabled


+(id)sharedSimulator;
-(BOOL)_isImmediateEvent:(id)arg0 ;
-(BOOL)_isValidEvent:(id)arg0 ;
-(BOOL)_parseErrorCodeFromString:(id)arg0 destination:(*NSInteger)arg1 ;
-(BOOL)_parseEventBooleanFromString:(id)arg0 destination:(*NSInteger)arg1 ;
-(BOOL)_parseIntFromString:(id)arg0 destination:(*int)arg1 ;
-(BOOL)_parseOptionalEntriesInLineFromWords:(id)arg0 argStartAt:(*int)arg1 argEndAt:(*int)arg2 argDuration:(*int)arg3 argUntilStop:(*id)arg4 argAssetBuildVersions:(*id)arg5 argAssetProductVersions:(*id)arg6 argAssetAttributesPlist:(*id)arg7 argAssetState:(*id)arg8 argUpdateInfoPlist:(*id)arg9 argErrorDomain:(*id)arg10 argErrorCode:(*NSInteger)arg11 argErrorRecoverable:(*NSInteger)arg12 ;
-(NSInteger)_actionFromString:(id)arg0 ;
-(NSInteger)_triggerFromString:(id)arg0 ;
-(id)_eventFromLine:(id)arg0 ;
-(id)_locateEventForModule:(id)arg0 forIdentity:(id)arg1 withTrigger:(NSInteger)arg2 forEvent:(id)arg3 inState:(id)arg4 ;
-(id)_performOffQueueEvent:(id)arg0 ;
-(id)_performSimulatedEventAlteration:(id)arg0 ;
-(id)begin:(id)arg0 atFunction:(id)arg1 ;
-(id)end:(id)arg0 atFunction:(id)arg1 ;
-(id)fsm:(id)arg0 forEvent:(id)arg1 inState:(id)arg2 ;
-(id)generateError:(id)arg0 ofDomain:(id)arg1 withCode:(NSInteger)arg2 ;
-(id)init;
-(int)countOfAlterationsPerformed;
-(void)_adoptAllEventAlterations:(id)arg0 ;
-(void)_dumpAllEventAlterations;
-(void)_performingAlteration:(id)arg0 ;
-(void)_triggerOffQueueAlteration:(id)arg0 ;
-(void)adoptAllEventAlterations:(id)arg0 ;
-(void)clearAllEventAlterations;
-(void)dumpAllEventAlterations;
-(void)registerCallbackHandler:(id)arg0 ;


@end


#endif