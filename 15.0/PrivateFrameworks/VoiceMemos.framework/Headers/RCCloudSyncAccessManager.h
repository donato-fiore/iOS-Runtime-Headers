// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCCLOUDSYNCACCESSMANAGER_H
#define RCCLOUDSYNCACCESSMANAGER_H

@class ACMonitoredAccountStore, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate, RCCloudSyncAccessManagerDelegate;

#import <Foundation/Foundation.h>

#import "RCManagedConfigurationHelper.h"

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate>

 {
    ACMonitoredAccountStore *_accountStore;
    BOOL _monitoringAccountChanges;
    RCManagedConfigurationHelper *_managedConfigurationHelper;
    int _tccNotifyToken;
}


@property (readonly) ACMonitoredAccountStore *accountStore;
@property (readonly, nonatomic) BOOL cloudSyncIsAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RCCloudSyncAccessManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int tccCloudAccess;


-(void)_availabilityChanged;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)dealloc;
-(void)managedConfigurationUpdated:(BOOL)arg0 ;
-(void)startMonitoringAccountChanges;


@end


#endif