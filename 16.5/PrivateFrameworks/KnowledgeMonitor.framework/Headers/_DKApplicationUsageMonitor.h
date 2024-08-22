// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKAPPLICATIONUSAGEMONITOR_H
#define _DKAPPLICATIONUSAGEMONITOR_H

@class DKMonitor, NSSet, FBSDisplayLayoutMonitor, NSString, FBSDisplayMonitor, NSDictionary;
@protocol FBSDisplayObserving;



@interface _DKApplicationUsageMonitor : DKMonitor <FBSDisplayObserving>



@property (retain, nonatomic) NSSet *activeApplications; // ivar: _activeApplications
@property (retain, nonatomic) NSSet *activeCarPlayApplications; // ivar: _activeCarPlayApplications
@property (retain, nonatomic) NSSet *activeExternalApplications; // ivar: _activeExternalApplications
@property (retain, nonatomic) FBSDisplayLayoutMonitor *carPlayMonitor; // ivar: _carPlayMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor; // ivar: _displayMonitor
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor; // ivar: _externalMonitor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents; // ivar: _inUseApplicationEvents
@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor; // ivar: _monitor
@property (readonly) Class superclass;


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithBundleIdentifier:(id)arg0 startDate:(id)arg1 usageType:(NSInteger)arg2 usageTrusted:(BOOL)arg3 ;
+(id)eventStream;
-(id)init;
-(void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)arg0 clearAll:(BOOL)arg1 ;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)invalidateInstantState;
-(void)obtainCurrentValue;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateActiveApplicationsWithLayout:(id)arg0 displayType:(NSUInteger)arg1 ;
-(void)updateAppDataInContextStore;
-(void)updateInUseApplications:(id)arg0 activeApplications:(id)arg1 ;


@end


#endif