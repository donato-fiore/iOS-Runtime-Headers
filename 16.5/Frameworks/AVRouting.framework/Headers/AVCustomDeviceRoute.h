// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCUSTOMDEVICEROUTE_H
#define AVCUSTOMDEVICEROUTE_H

@class NSUUID, DADevice;
@protocol OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface AVCustomDeviceRoute : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSUUID *bluetoothIdentifier; // ivar: _bluetoothIdentifier
@property (retain, nonatomic) DADevice *device; // ivar: _device
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint; // ivar: _networkEndpoint


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif