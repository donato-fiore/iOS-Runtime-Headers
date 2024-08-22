// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIPLATFORMINFO_H
#define NIPLATFORMINFO_H


#import <Foundation/Foundation.h>


@interface NIPlatformInfo : NSObject



+(BOOL)isInternalBuild;
+(BOOL)supportsAoA;
+(BOOL)supportsSyntheticAperture;
+(BOOL)supportsUWB;


@end


#endif