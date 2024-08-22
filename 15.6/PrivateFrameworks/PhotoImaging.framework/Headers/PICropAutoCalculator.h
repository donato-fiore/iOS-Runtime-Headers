// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PICROPAUTOCALCULATOR_H
#define PICROPAUTOCALCULATOR_H

@class NUAutoCalculator, NSNumber, NSString;
@protocol NUTimeBased, PIFaceObservingAutoCalculator;


#import "PIFaceObservationCache.h"

@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>



@property (copy) NSNumber *autoStraightenDominantAngleDiffThreshold; // ivar: _autoStraightenDominantAngleDiffThreshold
@property (copy) NSNumber *autoStraightenVerticalAngleThreshold; // ivar: _autoStraightenVerticalAngleThreshold
@property (readonly, copy) NSString *debugDescription;
@property BOOL debugFilesEnabled; // ivar: _debugFilesEnabled
@property (copy) NSString *debugFilesPrefix; // ivar: _debugFilesPrefix
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache; // ivar: _faceObservationCache
@property (readonly) NSUInteger hash;
@property CGFloat maxAutoStraighten; // ivar: _maxAutoStraighten
@property CGFloat minAutoStraighten; // ivar: _minAutoStraighten
@property BOOL shouldPerformAutoCrop; // ivar: _shouldPerformAutoCrop
@property BOOL shouldPerformAutoStraighten; // ivar: _shouldPerformAutoStraighten
@property BOOL shouldUseAutoStraightenVerticalDetector; // ivar: _shouldUseAutoStraightenVerticalDetector
@property (readonly) Class superclass;
@property (nonatomic) ? time;


+(BOOL)stitchedOvercaptureRect:(struct CGRect *)arg0 primaryRect:(struct CGRect *)arg1 forComposition:(id)arg2 error:(*id)arg3 ;
+(id)updateCropAdjustment:(id)arg0 after:(id)arg1 error:(*id)arg2 ;
+(struct CGRect )overcaptureRectForStitchedOvercaptureSize:(struct ? )arg0 overcaptureVideoComplementSize:(struct ? )arg1 primarySize:(struct ? )arg2 autoLoopStabilizedCropRect:(struct CGRect )arg3 ;
-(BOOL)undoExifOrientation:(struct ? *)arg0 error:(*id)arg1 ;
-(id)imageProperties:(*id)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif