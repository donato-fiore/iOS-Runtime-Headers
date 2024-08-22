// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MICONTROLLER_H
#define MICONTROLLER_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "VKMapView.h"

@interface MIController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
}


@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive


+(id)sharedController;
-(id)init;
-(void)activateController:(id)arg0 ;
-(void)deactivateController;
-(void)decodeDebugTreeData:(id)arg0 ;
-(void)handleXPCEvent:(id)arg0 ;
-(void)recievedData:(id)arg0 ;
-(void)sendData:(id)arg0 ;


@end


#endif