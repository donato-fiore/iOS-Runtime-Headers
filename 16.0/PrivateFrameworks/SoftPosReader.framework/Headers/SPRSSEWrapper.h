// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRSSEWRAPPER_H
#define SPRSSEWRAPPER_H


#import <Foundation/Foundation.h>


@interface SPRSSEWrapper : NSObject



+(BOOL)isFeatureAppleSSESupported;
+(id)getSignedDeviceData:(id)arg0 error:(*id)arg1 ;


@end


#endif