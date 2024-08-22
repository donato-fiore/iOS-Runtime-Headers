// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUSYSTEMOUTPUTDEVICEROUTECONTROLLER_H
#define MRUSYSTEMOUTPUTDEVICEROUTECONTROLLER_H

@class CXCallObserver, NSString, NSHashTable, MPAVOutputDeviceRoute, MPAVEndpointRoute;
@protocol CXCallObserverDelegate;

#import <Foundation/Foundation.h>

#import "MRUOutputDeviceAsset.h"

@interface MRUSystemOutputDeviceRouteController : NSObject <CXCallObserverDelegate>



@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSplitRoute; // ivar: _isSplitRoute
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) MRUOutputDeviceAsset *primaryOutputDeviceAsset;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // ivar: _primaryOutputDeviceRoute
@property (readonly, nonatomic) MRUOutputDeviceAsset *secondaryOutputDeviceAsset;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // ivar: _secondaryOutputDeviceRoute
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAsset;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAssetWithInCall;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // ivar: _systemOutputDeviceRoute
@property (readonly, nonatomic) MPAVEndpointRoute *systemRoute; // ivar: _systemRoute


+(id)outputContextDescription;
+(id)sharedController;
-(BOOL)isCallActive;
-(NSInteger)outputDeviceAssetTypeForAirPlayRoute:(id)arg0 ;
-(NSInteger)outputDeviceAssetTypeForClusterRoute:(id)arg0 ;
-(NSInteger)outputDeviceAssetTypeForDeviceRoute:(id)arg0 ;
-(id)init;
-(id)outputDeviceAssetForOutputDeviceRoute:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)routeDidChangeNotification;
-(void)updateOutputDevices;


@end


#endif