// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2DEXTRAPOLATIONFILTERING_H
#define ABPK2DEXTRAPOLATIONFILTERING_H


#import <Foundation/Foundation.h>

#import "ABPK2DDetectionResult.h"

@interface ABPK2DExtrapolationFiltering : NSObject {
    SkeletonJointFilter<float> _extrapolationFilter2D;
    CGFloat _extrapolationTime;
    SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
    Human _rawTrackedHuman;
    Human _trackedHuman;
    ABPK2DDetectionResult *_aligned3DSkeleton;
    BOOL _shouldPush3DSupportSkeleton;
    BOOL _use3DSupportSkeletonForExtrapolation;
    vector<Human, std::allocator<Human>> _rawTrackedHumanVector;
    Human _trackedHumanForLifting;
    BOOL _rawTrackedHumanDeNormalized;
    BOOL _rawTrackedHumanVectorDeNormalized;
    BOOL _trackedHumanDeNormalized;
    BOOL _trackedHumanForLiftingDeNormalized;
    CGSize _mlImageSize;
}




-(*void)rawTrackedHuman;
-(*void)rawTrackedHumanVector;
-(*void)trackedHuman;
-(*void)trackedHumanForLifting;
-(id)aligned3DSkeleton;
-(id)initWithUse3DSkeletonForExtrapolation:(BOOL)arg0 shouldPush3DSupportSkeleton:(BOOL)arg1 withExtrapolationTime:(CGFloat)arg2 ;
-(int)performExtrapolationOnHumans:(*void)arg0 withImageResolution:(struct CGSize )arg1 atTimestamp:(CGFloat)arg2 rotationNeeded:(NSInteger)arg3 previousSkeleton3D:(id)arg4 ;


@end


#endif