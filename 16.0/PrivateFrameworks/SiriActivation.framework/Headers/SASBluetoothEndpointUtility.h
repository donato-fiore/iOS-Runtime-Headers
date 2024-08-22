// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASBLUETOOTHENDPOINTUTILITY_H
#define SASBLUETOOTHENDPOINTUTILITY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SASBluetoothEndpointUtility : NSObject {
    NSObject<OS_dispatch_queue> *_serialBluetoothEndpointQueue;
}


@property (retain, getter=_endpointType, setter=_setEndpointType:) NSString *endpointType; // ivar: _endpointType


-(BOOL)isConnectedToBluetoothVehicle;
-(id)init;
-(void)_registerListenersAndSetEndpointTypeWithNotification:(id)arg0 ;
-(void)_setEndpointTypeWithNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif