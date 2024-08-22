// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKAPPLICATIONUSAGEMONITOR_H
#define _DKAPPLICATIONUSAGEMONITOR_H

@class DKMonitor, NSSet, FBSDisplayLayoutMonitor, NSDictionary;



@interface _DKApplicationUsageMonitor : DKMonitor

@property (retain, nonatomic) NSSet *activeApplications; // ivar: _activeApplications
@property (retain, nonatomic) NSSet *activeExternalApplications; // ivar: _activeExternalApplications
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor; // ivar: _externalMonitor
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents; // ivar: _inUseApplicationEvents
@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor; // ivar: _monitor


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithBundleIdentifier:(id)arg0 startDate:(id)arg1 usageType:(NSInteger)arg2 usageTrusted:(BOOL)arg3 ;
+(id)eventStream;
-(id)init;
-(void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)arg0 clearAll:(BOOL)arg1 ;
-(void)invalidateInstantState;
-(void)obtainCurrentValue;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateActiveApplicationsWithLayout:(id)arg0 externalDisplay:(BOOL)arg1 ;
-(void)updateAppDataInContextStore;
-(void)updateInUseApplications:(id)arg0 activeApplications:(id)arg1 ;


@end


#endif