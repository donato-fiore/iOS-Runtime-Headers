// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATSHARINGDEVICEDISCOVERY_H
#define CATSHARINGDEVICEDISCOVERY_H

@class NSArray;
@protocol CATSharingDiscoveryPrimitives, CATSharingDeviceDiscoveryDelegate;

#import <Foundation/Foundation.h>

#import "CATOperationQueue.h"

@interface CATSharingDeviceDiscovery : NSObject {
    id<CATSharingDiscoveryPrimitives> *mDiscoveryPrimitives;
    id<CATSharingDeviceDiscoveryDelegate> *mDelegate;
    CATOperationQueue *mDelegationQueue;
}


@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) NSArray *nearbyDevices; // ivar: _nearbyDevices


-(id)initWithDiscoveryPrimitives:(id)arg0 delegate:(id)arg1 delegateOperationQueue:(id)arg2 ;
-(id)pairingTerminalForDevice:(id)arg0 ;
-(void)_activate;
-(void)_invalidateWithError:(id)arg0 ;
-(void)activate;
-(void)addPrimitiveHandlers;
-(void)deviceFound:(id)arg0 ;
-(void)deviceLost:(id)arg0 ;
-(void)invalidate;
-(void)removePrimitiveHandlers;


@end


#endif