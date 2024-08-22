// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAPPINSTALLATIONOBSERVER_H
#define FCAPPINSTALLATIONOBSERVER_H

@class FCCAppInstallationUtility;

#import <Foundation/Foundation.h>


@interface FCAppInstallationObserver : NSObject {
    FCCAppInstallationUtility *_appInstallationUtility;
    BOOL _isAppInstalled;
    os_unfair_lock_s _unfairLock;
}


@property (readonly, nonatomic) BOOL fitnessAppInstalled;


-(id)init;
-(void)_applicationsInstalled:(id)arg0 ;
-(void)_applicationsUninstalled:(id)arg0 ;
-(void)_setAppInstalled:(BOOL)arg0 ;
-(void)_updateApplicationInstalled;


@end


#endif