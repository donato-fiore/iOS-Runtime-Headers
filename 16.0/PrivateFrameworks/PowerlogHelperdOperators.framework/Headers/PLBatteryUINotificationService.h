// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUINOTIFICATIONSERVICE_H
#define PLBATTERYUINOTIFICATIONSERVICE_H

@class PLService, NSString, NSMutableDictionary, PLXPCResponderOperatorComposition, NSDictionary, PowerUISmartChargeClient, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate;


#import "PLBatteryUINotificationService.h"

@interface PLBatteryUINotificationService : PLService <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isOBCEngaged; // ivar: _isOBCEngaged
@property (retain) PLBatteryUINotificationService *notificationService; // ivar: _notificationService
@property (retain) NSMutableDictionary *queryPayload; // ivar: _queryPayload
@property (retain) PLXPCResponderOperatorComposition *queryResponder; // ivar: _queryResponder
@property (retain, nonatomic) NSDictionary *queryResponderService; // ivar: _queryResponderService
@property (retain) PowerUISmartChargeClient *smartChargingClient; // ivar: _smartChargingClient
@property (readonly) Class superclass;
@property BOOL tlcNotificationDelivered; // ivar: _tlcNotificationDelivered
@property (retain) NSString *tlcNotificationIdentifier; // ivar: _tlcNotificationIdentifier
@property (retain) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


+(void)load;
-(id)thermallyLimitedChargingEngagedContent;
-(id)thermallyLimitedChargingEngagedRequest;
-(void)initOperatorDependancies;
-(void)removeTLCNotification;
-(void)surfaceNotification;


@end


#endif