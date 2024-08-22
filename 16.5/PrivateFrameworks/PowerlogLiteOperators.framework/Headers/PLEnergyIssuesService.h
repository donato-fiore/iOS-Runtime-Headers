// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLENERGYISSUESSERVICE_H
#define PLENERGYISSUESSERVICE_H

@class PLService, NSString, PLXPCListenerOperatorComposition;



@interface PLEnergyIssuesService : PLService

@property (retain) NSString *entryKeyForEnergyIssues; // ivar: _entryKeyForEnergyIssues
@property (retain) PLXPCListenerOperatorComposition *eventListener; // ivar: _eventListener
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger; // ivar: _xpcListenerEnergyIssueTrigger


+(id)entryEventPointDefinitionEnergySignatures;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(struct __CFDictionary *)createAssertionThreshold:(int)arg0 withAggregateLimit:(int)arg1 ;
-(void)handleAssertionNotifications;
-(void)initOperatorDependancies;
-(void)setAssertionThresholds;


@end


#endif