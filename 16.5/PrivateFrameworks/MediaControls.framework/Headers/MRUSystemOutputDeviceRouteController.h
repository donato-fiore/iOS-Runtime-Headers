// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSYSTEMOUTPUTDEVICEROUTECONTROLLER_H
#define MRUSYSTEMOUTPUTDEVICEROUTECONTROLLER_H

@class NSString, NSHashTable, MPAVOutputDeviceRoute, MPAVEndpointRoute;
@protocol MRUCallMonitorObserver;

#import <Foundation/Foundation.h>

#import "MRUOutputDeviceAsset.h"

@interface MRUSystemOutputDeviceRouteController : NSObject <MRUCallMonitorObserver>



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
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)callMonitorDidUpdateOnCall:(id)arg0 isOnCall:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)routeDidChangeNotification;
-(void)updateOutputDevices;


@end


#endif