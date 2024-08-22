// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPLICATIONWORKSPACEOBSERVER_H
#define LSAPPLICATIONWORKSPACEOBSERVER_H

@class NSString, NSUUID;
@protocol LSApplicationWorkspaceObserverProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)actuallyOverridesDMFObserverMethod;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
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
-(void)applicationsDidChangePersonas:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidFailToUninstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)deviceManagementPolicyDidChange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)networkUsageChanged:(BOOL)arg0 ;


@end


#endif