// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXREMOTEDEVICE_H
#define AXREMOTEDEVICE_H

@class RPCompanionLinkDevice, NSMutableDictionary, RPCompanionLinkClient, NSArray, NSString;
@protocol AXRemoteDeviceConnectionDelegate;

#import <Foundation/Foundation.h>


@interface AXRemoteDevice : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSObject<AXRemoteDeviceConnectionDelegate> *connectionDelegate; // ivar: _connectionDelegate
@property (nonatomic) NSInteger contextType; // ivar: _contextType
@property (retain, nonatomic) RPCompanionLinkDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableDictionary *deviceGestureCustomizations; // ivar: _deviceGestureCustomizations
@property (retain, nonatomic) RPCompanionLinkClient *deviceLinkClient; // ivar: _deviceLinkClient
@property (retain, nonatomic) NSArray *deviceRemoteActions; // ivar: _deviceRemoteActions
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;


-(id)customizedRemoteActionForHandGestureEventUsage:(NSInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)remoteActionsForPreferredContextType:(NSInteger)arg0 ;
-(void)_setRemoteAction:(id)arg0 forHandGestureEventUsage:(NSInteger)arg1 ;
-(void)connectIfNecessary:(id)arg0 ;
-(void)disconnect;
-(void)sendPayload:(id)arg0 withEventID:(id)arg1 ;
-(void)sendPayload:(id)arg0 withEventID:(id)arg1 withTimeout:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif