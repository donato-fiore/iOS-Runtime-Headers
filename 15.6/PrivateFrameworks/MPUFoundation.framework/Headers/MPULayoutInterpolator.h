// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPULAYOUTINTERPOLATOR_H
#define MPULAYOUTINTERPOLATOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPULayoutInterpolator : NSObject <NSCopying>

 {
    vector<MPU::LayoutInterpolator::EntriesContainer, std::allocator<MPU::LayoutInterpolator::EntriesContainer>> _entriesContainers;
    BOOL _hasEntryWithSpecificSecondaryReferenceMetric;
}




-(CGFloat)_interpolatedValueForPrimaryReferenceMetric:(CGFloat)arg0 secondaryReferenceMetric:(CGFloat)arg1 betweenFirstEntriesContainer:(*void)arg2 andSecondEntriesContainer:(*void)arg3 ;
-(CGFloat)valueForReferenceMetric:(CGFloat)arg0 ;
-(CGFloat)valueForReferenceMetric:(CGFloat)arg0 secondaryReferenceMetric:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct Point3D )_pointForEntry:(struct Entry )arg0 andPrimaryReferenceMetric:(CGFloat)arg1 usingFallbackSecondaryReferenceMetric:(CGFloat)arg2 ;
-(struct vector<MPU::Point3D, std::allocator<MPU::Point3D>> )_sortedPointsFor3DInterpolationFromEntriesContainer:(*void)arg0 usingQueriedPoint:(struct Point3D )arg1 fallbackSecondaryReferenceMetric:(CGFloat)arg2 ;
-(void)_sortPointsFor3DInterpolation:(*void)arg0 usingQueriedPoint:(struct Point3D )arg1 ;
-(void)addValue:(CGFloat)arg0 forReferenceMetric:(CGFloat)arg1 ;
-(void)addValue:(CGFloat)arg0 forReferenceMetric:(CGFloat)arg1 secondaryReferenceMetric:(CGFloat)arg2 ;


@end


#endif