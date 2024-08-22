// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLOCALAPPINSTALLATIONMANAGER_H
#define HKLOCALAPPINSTALLATIONMANAGER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol;


#import "HKWatchAppInstallationManager.h"

@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)isWatchAppInstalledWithError:(*id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif