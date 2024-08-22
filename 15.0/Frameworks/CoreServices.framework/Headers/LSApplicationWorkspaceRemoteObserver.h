// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSAPPLICATIONWORKSPACEREMOTEOBSERVER_H
#define LSAPPLICATIONWORKSPACEREMOTEOBSERVER_H

@class NSHashTable, NSString, NSUUID;
@protocol LSInternalWorkspaceObserverProtocol, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LSApplicationWorkspaceRemoteObserver : NSObject <LSInternalWorkspaceObserverProtocol, NSSecureCoding>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isObservinglsd) BOOL observinglsd; // ivar: _observinglsd
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)messageObserversWithSelector:(SEL)arg0 andApps:(id)arg1 ;
-(NSUInteger)currentObserverCount;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localObservers;
-(void)addLocalObserver:(id)arg0 ;
-(void)applicationIconDidChange:(id)arg0 ;
-(void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidPause:(id)arg0 ;
-(void)applicationInstallsDidPrioritize:(id)arg0 ;
-(void)applicationInstallsDidResume:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidFailToUninstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)deviceManagementPolicyDidChange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)networkUsageChanged:(BOOL)arg0 ;
-(void)pluginsDidInstall:(id)arg0 ;
-(void)pluginsDidUninstall:(id)arg0 ;
-(void)pluginsWillUninstall:(id)arg0 ;
-(void)removeLocalObserver:(id)arg0 ;


@end


#endif