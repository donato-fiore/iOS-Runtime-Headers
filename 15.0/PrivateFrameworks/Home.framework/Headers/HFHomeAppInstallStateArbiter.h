// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEAPPINSTALLSTATEARBITER_H
#define HFHOMEAPPINSTALLSTATEARBITER_H

@class NSString, NSURL, NAFuture, NSHashTable;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *homeAppBundleURL;
@property (retain, nonatomic) NAFuture *homeAppInstalledFuture; // ivar: _homeAppInstalledFuture
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_fastPath_isHomeAppInstalled;
-(id)init;
-(void)_applications:(id)arg0 didInstall:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif