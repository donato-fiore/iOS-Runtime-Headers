// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTDEVICECAPABILITIES_H
#define GTDEVICECAPABILITIES_H

@class NSDictionary;
@protocol GTDeviceCapabilities;

#import <Foundation/Foundation.h>


@interface GTDeviceCapabilities : NSObject <GTDeviceCapabilities>

 {
    NSDictionary *_daemonDeviceCapabilities;
    NSDictionary *_gpuToolsVersionQuery;
}




-(id)daemonDeviceCapabilities;
-(id)gpuToolsVersionQuery;
-(id)inferiorEnvironment:(id)arg0 ;
-(id)init;


@end


#endif