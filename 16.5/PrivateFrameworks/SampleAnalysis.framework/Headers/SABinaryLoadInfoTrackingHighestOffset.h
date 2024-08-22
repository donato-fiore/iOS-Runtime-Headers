// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABINARYLOADINFOTRACKINGHIGHESTOFFSET_H
#define SABINARYLOADINFOTRACKINGHIGHESTOFFSET_H



#import "SABinaryLoadInfo.h"

@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo {
    BOOL _isInKernelAddressSpace;
}


@property NSUInteger highestOffset; // ivar: _highestOffset


-(BOOL)isInKernelAddressSpace;


@end


#endif