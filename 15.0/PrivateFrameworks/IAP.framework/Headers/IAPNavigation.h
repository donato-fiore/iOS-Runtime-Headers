// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAPNAVIGATION_H
#define IAPNAVIGATION_H

@class NSNotificationCenter, NSSet;
@protocol IAPNavigationDelegate, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IAPNavigation : NSObject {
    *__CFNotificationCenter _darwinNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
}


@property (retain) NSSet *availableAccessories; // ivar: _availableAccessories
@property BOOL connected; // ivar: _connected
@property (weak) NSObject<IAPNavigationDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_xpc_object> *iap2d_connection; // ivar: _iap2d_connection
@property (retain) NSObject<OS_dispatch_queue> *processingQ; // ivar: _processingQ


-(id)_convert_xpc_array_to_NSArray:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_getConnectedAccessories;
-(void)_iap2d_server_did_die;
-(void)_iap2d_server_did_launch;
-(void)_updateInternalStateWithArrayOfAccessories:(id)arg0 ;
-(void)dealloc;
-(void)updateNavigationGuidanceInfo:(id)arg0 forAccessory:(id)arg1 withComponent:(id)arg2 ;
-(void)updateNavigationManeuverInfo:(id)arg0 forAccessory:(id)arg1 withComponent:(id)arg2 ;


@end


#endif