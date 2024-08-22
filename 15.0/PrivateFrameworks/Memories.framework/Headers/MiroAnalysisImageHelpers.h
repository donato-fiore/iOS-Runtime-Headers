// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROANALYSISIMAGEHELPERS_H
#define MIROANALYSISIMAGEHELPERS_H

@class CIDetector, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MiroAnalysisImageHelpers : NSObject {
    CIDetector *_faceDetector;
    BOOL _faceTrackingEnabled;
    ? _recordingStartTime;
    NSMutableDictionary *_currentFaceRangesKeyedByFaceID;
    NSUInteger _exifOrientation;
    NSMutableDictionary *_shotTypeToSampleCountMap;
}


@property (nonatomic) NSInteger projectNaturalFrameRate; // ivar: _projectNaturalFrameRate


+(NSInteger)imageOrientationForEXIFOrientation:(NSUInteger)arg0 ;
+(NSUInteger)exifOrientationForUIImageOrientation:(NSInteger)arg0 ;
+(NSUInteger)exifOrientationForVideoTrack:(id)arg0 ;
-(BOOL)_processOutputtingFaceRangeWithCGImage:(struct CGImage *)arg0 detectionTime:(struct ? )arg1 faceRanges:(*id)arg2 ;
-(BOOL)_startOutputtingFaceRangesWithStartTime:(struct ? )arg0 orientation:(NSUInteger)arg1 ;
-(NSInteger)_positionForFaceBounds:(struct CGRect )arg0 ;
-(NSInteger)_primaryShotType;
-(NSInteger)_shotTypeForFaceBoundsArray:(id)arg0 ;
-(id)_analyzeColorsInImage:(id)arg0 ;
-(id)_analyzeColorsInVideoFrame:(struct CGImage *)arg0 withOrientation:(NSUInteger)arg1 ;
-(id)_makeColorAnalysisDictionary:(id)arg0 forImageBounds:(struct CGRect )arg1 ;
-(id)init;
-(void)_outputFaceRangesWithRemovedFaceIDs:(id)arg0 outputtedFaceRanges:(*id)arg1 ;
-(void)_stopOutputtingFaceRangesWithEndTime:(struct ? )arg0 lastFaceRanges:(*id)arg1 ;
-(void)_updateFaceRangeWithFaceID:(NSInteger)arg0 detectionTime:(struct ? )arg1 facePosition:(NSInteger)arg2 flags:(NSUInteger)arg3 faceBounds:(struct CGRect )arg4 ;
-(void)_updateShotTypeMapWithFaceBoundsArray:(id)arg0 ;
// -(void)processAVAsset:(id)arg0 options:(NSUInteger)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)processUIImage:(id)arg0 options:(NSUInteger)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif