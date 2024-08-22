// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKVEHICLECONNECTIVITYCOORDINATOR_H
#define NPKVEHICLECONNECTIVITYCOORDINATOR_H

@class NSDistributedNotificationCenter;
@protocol NPKVehicleConnectivityCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface NPKVehicleConnectivityCoordinator : NSObject {
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}


@property (weak, nonatomic) NSObject<NPKVehicleConnectivityCoordinatorDelegate> *delegate; // ivar: _delegate


+(id)_secureElementPassMatchingAID:(id)arg0 subcredentialIdentifier:(id)arg1 ;
+(id)_subcredentialIdentifierForPass:(id)arg0 ;
-(BOOL)isVehicleConnectedForPass:(id)arg0 ;
-(id)init;
-(id)initWithDistributedNotificationCenter:(id)arg0 ;
-(void)_handleCarKeyVehicleConnectedNotification:(id)arg0 ;
-(void)_handleCarKeyVehicleDisconnectedNotification:(id)arg0 ;
-(void)_parseVehicleConnectivityChangeNotificationObject:(id)arg0 outApplicationIdentifier:(*id)arg1 outSubcredentialIdentifier:(*id)arg2 ;
-(void)_registerObservers;


@end


#endif