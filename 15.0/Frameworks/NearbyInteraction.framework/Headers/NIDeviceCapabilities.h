// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NIDEVICECAPABILITIES_H
#define NIDEVICECAPABILITIES_H


#import <Foundation/Foundation.h>


@interface NIDeviceCapabilities : NSObject

@property (readonly) BOOL supportsCoarseRanging; // ivar: _supportsCoarseRanging
@property (readonly) BOOL supportsFineRanging; // ivar: _supportsFineRanging


-(id)initWithFineRangingSupport:(BOOL)arg0 coarseRangingSupport:(BOOL)arg1 ;


@end


#endif