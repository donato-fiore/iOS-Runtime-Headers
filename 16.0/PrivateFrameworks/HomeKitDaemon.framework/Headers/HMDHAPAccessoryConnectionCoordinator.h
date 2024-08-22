// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHAPACCESSORYCONNECTIONCOORDINATOR_H
#define HMDHAPACCESSORYCONNECTIONCOORDINATOR_H

@class NSNotificationCenter, NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDHAPAccessoryConnectionCoordinator : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    HMDHome *_home;
    NSNotificationCenter *_notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 notificationCenter:(id)arg1 ;
-(id)logIdentifier;
-(void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(BOOL)arg0 ;
-(void)_enableDisconnectOnIdleWithAccessories;
-(void)configureWithIsResidentCapable:(BOOL)arg0 ;
-(void)evaluateAccessoryConnectionStatus;
-(void)handleCurrentResidentChanged:(id)arg0 ;
-(void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)handleResidentAddRemove:(id)arg0 ;
-(void)handleResidentChangedOnNonResident;
-(void)handleResidentStatusChanged:(id)arg0 ;
-(void)handleResidentUpdated:(id)arg0 ;


@end


#endif