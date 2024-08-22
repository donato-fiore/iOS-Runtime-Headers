// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCDEVICEQUERY_H
#define TVRCDEVICEQUERY_H

@class NSSet;
@protocol TVRCDeviceQueryDelegate;

#import <Foundation/Foundation.h>


@interface TVRCDeviceQuery : NSObject

@property (weak, nonatomic) NSObject<TVRCDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSSet *devices;


+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg0 ;
+(void)fetchActiveEndpointUIDWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif