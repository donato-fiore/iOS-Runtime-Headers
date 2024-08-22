// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKAPPINSTALLMONITOR_H
#define _DKAPPINSTALLMONITOR_H

@class DKMonitor, LSApplicationWorkspace, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor;



@interface _DKAppInstallMonitor : DKMonitor <LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor>



@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace; // ivar: _appWorkspace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalDeletingHandler; // ivar: historicalDeletingHandler
@property (readonly) Class superclass;


+(id)_dateFromProxy:(id)arg0 ;
+(id)_eventWithAppProxy:(id)arg0 didInstall:(BOOL)arg1 ;
+(id)_identifierFromProxy:(id)arg0 ;
+(id)_metadataFromProxy:(id)arg0 didInstall:(BOOL)arg1 ;
+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)_applicationsDidChange:(id)arg0 didInstall:(BOOL)arg1 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;


@end


#endif