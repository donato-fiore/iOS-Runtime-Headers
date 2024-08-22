// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DDETECTIONPOSTPROCESSHEATMAP_H
#define ABPK2DDETECTIONPOSTPROCESSHEATMAP_H



#import "ABPK2DDetectionPostprocess.h"
#import "ABPKImagePreProcessingParams.h"
#import "ABPK2DExtrapolationFiltering.h"

@interface ABPK2DDetectionPostprocessHeatmap : ABPK2DDetectionPostprocess {
    NSUInteger _numberOfInputJoints;
    NSUInteger _numberOfOutputJoints;
    BOOL _saveKeypoints;
    BOOL _humansDetected;
    ABPKImagePreProcessingParams *_imagePreProcessingParams;
    ABPK2DExtrapolationFiltering *_extrapolationFiltering;
}




-(*void)rawTrackedHuman;
-(*void)rawTrackedHumanVector;
-(*void)trackedHuman;
-(*void)trackedHumanForLifting;
-(id)get2DDetectionResultforRotation:(NSInteger)arg0 croppedRect:(struct CGRect )arg1 ;
-(id)getAligned3DSkeleton;
-(id)getRaw2DDetectionResultforRotation:(NSInteger)arg0 croppedRect:(struct CGRect )arg1 ;
-(id)initWithInputJoints:(NSUInteger)arg0 andOutputJoints:(NSUInteger)arg1 use3DSkeletonForExtrapolation:(BOOL)arg2 shouldPush3DSupportSkeleton:(BOOL)arg3 withExtrapolationTime:(CGFloat)arg4 ;
-(int)extract2DSkeletonfromBuffers:(id)arg0 withImagePreProcessingParams:(id)arg1 atTimestamp:(CGFloat)arg2 previousSkeleton3D:(id)arg3 ;
-(void)_endExtract2DSkeletonSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endExtractHumanSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endExtrapolationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMaxFilterSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startExtract2DSkeletonSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startExtractHumanSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startExtrapolationSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMaxFilterSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)getRawTrackedHumanForLiftingSkeleton:(id)arg0 ;
-(void)getRawTrackedHumanSkeleton:(id)arg0 ;
-(void)getRawTrackedHumanSkeletonVector:(id)arg0 ;
-(void)getTrackedHumanForLiftingSkeleton:(id)arg0 ;
-(void)getTrackedHumanSkeleton:(id)arg0 ;


@end


#endif