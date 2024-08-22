// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSAUDIOHARDWARE_H
#define SIRITTSAUDIOHARDWARE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSAudioHardware : NSObject

@property (readonly) BOOL isAppleProduct; // ivar: _isAppleProduct
@property (readonly) BOOL isBluetooth; // ivar: _isBluetooth
@property (readonly) NSInteger productId; // ivar: _productId
@property (readonly) NSString *routeType; // ivar: _routeType
@property (readonly) NSInteger vendorId; // ivar: _vendorId


+(id)defaultOutput;
-(void)fetchHardwareInfo;


@end


#endif