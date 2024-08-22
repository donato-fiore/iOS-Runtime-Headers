// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTENTMETADATACACHEINVALIDATIONMONITOR_H
#define ATXINTENTMETADATACACHEINVALIDATIONMONITOR_H

@class NSUserDefaults;
@protocol ATXIntentMetadataCacheInvalidationDelegate;

#import <Foundation/Foundation.h>

#import "ATXInternalAppRegistrationNotification.h"
#import "_ATXInternalUninstallNotification.h"

@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    id<ATXIntentMetadataCacheInvalidationDelegate> *_delegate;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _ATXInternalUninstallNotification *_appUninstallListener;
    NSUserDefaults *_userDefaults;
}




-(id)_getCurrentBuild;
-(void)_checkForOSUpdate;
-(void)_listenForAppRegistrationAndUninstall;
-(void)_notifyDelegateApplicationsDidUninstall:(id)arg0 ;
-(void)_notifyDelegateApplicationsDidUpdate:(id)arg0 ;
-(void)_notifyDelegateSystemDidUpdate;
-(void)setDelegateAndStartMonitoring:(id)arg0 ;
-(void)setDelegateAndStartMonitoring:(id)arg0 userDefaults:(id)arg1 ;


@end


#endif