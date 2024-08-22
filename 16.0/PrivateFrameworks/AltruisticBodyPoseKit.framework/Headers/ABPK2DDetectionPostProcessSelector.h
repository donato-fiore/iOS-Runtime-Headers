// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DDETECTIONPOSTPROCESSSELECTOR_H
#define ABPK2DDETECTIONPOSTPROCESSSELECTOR_H


#import <Foundation/Foundation.h>


@interface ABPK2DDetectionPostProcessSelector : NSObject



+(id)get2DDetectionPostProcessWithNetworkConfig:(id)arg0 use3DSkeletonForExtrapolation:(BOOL)arg1 shouldPush3DSupportSkeleton:(BOOL)arg2 ;
+(id)get2DDetectionPostProcessWithNetworkConfig:(id)arg0 use3DSkeletonForExtrapolation:(BOOL)arg1 shouldPush3DSupportSkeleton:(BOOL)arg2 withExtrapolationTime:(CGFloat)arg3 ;


@end


#endif