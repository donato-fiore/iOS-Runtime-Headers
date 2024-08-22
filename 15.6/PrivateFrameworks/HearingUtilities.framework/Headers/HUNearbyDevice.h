// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNEARBYDEVICE_H
#define HUNEARBYDEVICE_H

@class NSSet, RPCompanionLinkClient, RPCompanionLinkDevice, NSString, IDSDevice, NSMutableDictionary;
@protocol HUNearbyDeviceDelegate;

#import <Foundation/Foundation.h>


@interface HUNearbyDevice : NSObject

@property (nonatomic, getter=isActivating) BOOL activating; // ivar: _activating
@property (retain, nonatomic) NSSet *cachableKeys; // ivar: _cachableKeys
@property (retain) RPCompanionLinkClient *client; // ivar: _client
@property (nonatomic) NSUInteger connectionStatus; // ivar: _connectionStatus
@property (weak, nonatomic) NSObject<HUNearbyDeviceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) RPCompanionLinkDevice *device; // ivar: _device
@property (retain, nonatomic) NSString *identifierWithoutDevice; // ivar: _identifierWithoutDevice
@property (retain, nonatomic) IDSDevice *idsDevice; // ivar: _idsDevice
@property (retain, nonatomic) NSMutableDictionary *previousMessageCache; // ivar: _previousMessageCache
@property (nonatomic) BOOL shouldTrack; // ivar: _shouldTrack


+(id)nearbyDeviceWithIDSDevice:(id)arg0 ;
+(id)nearbyDeviceWithIDSIdentifier:(id)arg0 ;
+(id)nearbyDeviceWithPeerDevice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)representsAWatch;
-(BOOL)representsPeerDevice:(id)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithIDSDevice:(id)arg0 ;
-(id)initWithIDSIdentifier:(id)arg0 ;
-(id)initWithPeerDevice:(id)arg0 ;
-(id)name;
-(void)dealloc;
-(void)purgeMessageCache;
-(void)reset;
-(void)sendMessage:(id)arg0 ;
-(void)setupSessionIfNecessary;
-(void)stop;


@end


#endif