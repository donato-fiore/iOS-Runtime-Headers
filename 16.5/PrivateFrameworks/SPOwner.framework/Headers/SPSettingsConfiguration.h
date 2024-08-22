// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSETTINGSCONFIGURATION_H
#define SPSETTINGSCONFIGURATION_H

@class NSUUID, NSDate, NSNumber, NSString, NSOperationQueue, FMXPCServiceDescription, NSSet, FMXPCSession, NSUserDefaults;
@protocol SPFMIPRegisterInfo, SPSettingsConfigurating, SPBeaconManagerXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating>



@property (readonly, copy, nonatomic) NSUUID *baUUID;
@property (readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property (readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property (retain, nonatomic) NSOperationQueue *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSObject<SPBeaconManagerXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (readonly, copy, nonatomic) NSSet *serviceDisabledReasons;
@property (copy, nonatomic) NSSet *serviceDisabledReasons; // ivar: _serviceDisabledReasons
@property (weak, nonatomic) id *serviceSettingsChangedNotificationToken; // ivar: _serviceSettingsChangedNotificationToken
@property (readonly, copy, nonatomic) NSString *serviceState;
@property (copy, nonatomic) NSString *serviceState; // ivar: _serviceState
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (retain, nonatomic) NSUserDefaults *sharedDefaults; // ivar: _sharedDefaults
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SPBeaconManagerXPCProtocol> *userAgentProxy; // ivar: _userAgentProxy


-(id)init;
-(id)serviceSettingsConfiguration;
-(void)_invalidate;
-(void)beginRefreshingServiceStateWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif