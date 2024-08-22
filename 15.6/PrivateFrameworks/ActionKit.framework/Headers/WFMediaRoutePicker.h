// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMEDIAROUTEPICKER_H
#define WFMEDIAROUTEPICKER_H

@class NSArray, NSString, NSMutableArray, MPAVRoutingController;
@protocol MPAVRoutingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFBluetoothSettingsClient.h"

@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate>



@property (readonly, nonatomic) NSArray *availableRoutes;
@property (readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient; // ivar: _bluetoothClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSInteger routeType; // ivar: _routeType
@property (retain, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRouteType:(NSInteger)arg0 ;
-(void)addAvailableRoutesObserver:(id)arg0 ;
-(void)findHandoffRouteMatchingDescriptor:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)findHandoffRoutesMatchingDescriptors:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)findRouteMatchingDescriptor:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)findRoutesMatchingDescriptors:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)getPairedAudioDevicesMatchingRouteDescriptor:(id)arg0 withCompletion:(id)arg1 ;
-(void)handOffFromSourceUID:(id)arg0 toDestinationUID:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)removeAvailableRoutesObserver:(id)arg0 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)selectRoute:(id)arg0 operation:(NSInteger)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;


@end


#endif