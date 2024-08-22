// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAFILTERKNOWNDEVICES_H
#define TAFILTERKNOWNDEVICES_H


#import <Foundation/Foundation.h>


@interface TAFilterKnownDevices : NSObject



+(id)removeAndProcessBackgroundDetections:(id)arg0 deviceRecord:(id)arg1 ;
+(id)removeDuplicateSuspiciousDevices:(id)arg0 ;
+(id)removeIssuedDevices:(id)arg0 deviceRecord:(id)arg1 ;
+(id)removeKnownSuspiciousDevices:(id)arg0 deviceRecord:(id)arg1 ;
+(id)removeMetricsFromKnownDevices:(id)arg0 deviceRecord:(id)arg1 ;


@end


#endif