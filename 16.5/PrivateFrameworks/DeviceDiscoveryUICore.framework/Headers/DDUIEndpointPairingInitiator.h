// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDUIENDPOINTPAIRINGINITIATOR_H
#define DDUIENDPOINTPAIRINGINITIATOR_H

@class NSArray;
@protocol DDUIEndpointPairingBrowsingTransport;

#import <Foundation/Foundation.h>


@interface DDUIEndpointPairingInitiator : NSObject

@property (nonatomic) unsigned int acceptedDeviceTypes; // ivar: _acceptedDeviceTypes
@property (readonly, nonatomic) NSArray *availableDevices;
@property (copy, nonatomic) id *availableDevicesChangedHandler; // ivar: _availableDevicesChangedHandler
@property (retain, nonatomic) NSObject<DDUIEndpointPairingBrowsingTransport> *transport; // ivar: _transport


-(id)initForDeviceTypes:(unsigned int)arg0 withTransport:(id)arg1 ;
-(id)pairingSessionForDevice:(id)arg0 bundleID:(id)arg1 serviceIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)beginWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif