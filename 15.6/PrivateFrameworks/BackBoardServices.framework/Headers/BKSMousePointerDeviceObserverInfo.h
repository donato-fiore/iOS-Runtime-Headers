// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSMOUSEPOINTERDEVICEOBSERVERINFO_H
#define BKSMOUSEPOINTERDEVICEOBSERVERINFO_H

@class NSSet;
@protocol BKSMousePointerDeviceObserver;

#import <Foundation/Foundation.h>


@interface BKSMousePointerDeviceObserverInfo : NSObject

@property (retain, nonatomic) NSObject<BKSMousePointerDeviceObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSSet *visibleDevices; // ivar: _visibleDevices




@end


#endif