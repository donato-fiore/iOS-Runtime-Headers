// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTCONTROLDEVICEDISCOVERY_H
#define AVOUTPUTCONTROLDEVICEDISCOVERY_H

@class AVOutputDeviceDiscoverySession;

#import <Foundation/Foundation.h>


@interface AVOutputControlDeviceDiscovery : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session; // ivar: _session


-(BOOL)supportsFitnessDataDestinationForDeviceIdentifier:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)deactivate;
-(void)dealloc;


@end


#endif