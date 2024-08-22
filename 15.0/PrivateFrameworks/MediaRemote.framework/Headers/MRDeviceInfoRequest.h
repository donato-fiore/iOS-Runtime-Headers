// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRDEVICEINFOREQUEST_H
#define MRDEVICEINFOREQUEST_H


#import <Foundation/Foundation.h>


@interface MRDeviceInfoRequest : NSObject



+(id)cachedDeviceInfoForOrigin:(id)arg0 ;
+(id)deviceInfoForOrigin:(id)arg0 ;
+(void)deviceInfoForOrigin:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
+(void)deviceInfoForUID:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif