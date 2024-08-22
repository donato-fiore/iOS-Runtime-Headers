// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APKOUTPUTDEVICEDISCOVERYSESSION_H
#define APKOUTPUTDEVICEDISCOVERYSESSION_H

@class NSArray, AVOutputDeviceDiscoverySession;

#import <Foundation/Foundation.h>


@interface APKOutputDeviceDiscoverySession : NSObject

@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session; // ivar: _session


-(id)init;
-(void)activate;
-(void)deactivate;
-(void)dealloc;


@end


#endif