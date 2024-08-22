// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVDISCOVERYSESSIONHELPER_H
#define MRAVDISCOVERYSESSIONHELPER_H


#import <Foundation/Foundation.h>


@interface MRAVDiscoverySessionHelper : NSObject {
    NSUInteger _discoverySessionFeatures;
}




-(id)createDiscoverySession;
-(id)initWithFeatures:(NSUInteger)arg0 ;
-(void)searchAVOutputDeviceForUID:(id)arg0 timeout:(CGFloat)arg1 identifier:(id)arg2 reason:(id)arg3 completion:(id)arg4 ;


@end


#endif