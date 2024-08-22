// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFPHOTOSFACEUTILITIES_H
#define PFPHOTOSFACEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFPhotosFaceUtilities : NSObject



+(BOOL)getCropRectForPortraitImage:(struct CGRect *)arg0 size:(CGFloat)arg1 imgWidth:(CGFloat)arg2 imgHeight:(CGFloat)arg3 centerX:(CGFloat)arg4 centerY:(CGFloat)arg5 ;
+(NSInteger)qualityMeasureForFace:(id)arg0 countOfFacesOnAsset:(NSUInteger)arg1 ;
+(id)bestMergeCandidateFaceFor:(id)arg0 from:(id)arg1 ignoreSourceAssetDimensions:(BOOL)arg2 ;
+(id)selectRepresentativeFromFaces:(id)arg0 qualityMeasureByLocalIdentifier:(id)arg1 representativenessByCSN:(id)arg2 ;
+(id)selectRepresentativeFromFaces:(id)arg0 qualityMeasureByLocalIdentifier:(id)arg1 representativenessByCSN:(id)arg2 candidateFaces:(id)arg3 ;
+(id)sortedViableMergeCandidateFacesFor:(id)arg0 from:(id)arg1 ignoreSourceAssetDimensions:(BOOL)arg2 matchScores:(*id)arg3 ;
+(struct CGSize )faceTileSizeAdjustingForImageAspectRatio:(struct CGSize )arg0 imgWidth:(CGFloat)arg1 imgHeight:(CGFloat)arg2 ;


@end


#endif