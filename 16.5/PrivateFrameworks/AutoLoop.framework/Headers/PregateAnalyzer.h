// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREGATEANALYZER_H
#define PREGATEANALYZER_H

@class NSArray, NSDictionary, NSData;

#import <Foundation/Foundation.h>

#import "PregateFeatureBuilder.h"

@interface PregateAnalyzer : NSObject

@property (retain) NSArray *badFrameFlags; // ivar: _badFrameFlags
@property (retain) NSDictionary *defaultParameters; // ivar: _defaultParameters
@property (retain) PregateFeatureBuilder *featureBuilder; // ivar: featureBuilder
@property (retain) NSArray *focusScores; // ivar: _focusScores
@property int gatingPassTrimResult_firstIndex; // ivar: _gatingPassTrimResult_firstIndex
@property int gatingPassTrimResult_lastIndex; // ivar: _gatingPassTrimResult_lastIndex
@property BOOL haveInputVideoSize; // ivar: _haveInputVideoSize
@property ? inputTrimTime; // ivar: inputTrimTime
@property CGSize inputVideoSize; // ivar: _inputVideoSize
@property ? minimumRequiredTrimLength; // ivar: minimumRequiredTrimLength
@property (readonly) ? outputTrimTime; // ivar: outputTrimTime
@property (retain) NSData *perFrameTranslationVecs; // ivar: _perFrameTranslationVecs
@property (retain) NSDictionary *pregateParameters; // ivar: pregateParameters
@property ? requiredFrameTime; // ivar: requiredFrameTime
@property ? requiredTimeRange; // ivar: requiredTimeRange
@property int trimInput_firstIndex; // ivar: _trimInput_firstIndex
@property int trimInput_lastIndex; // ivar: _trimInput_lastIndex


+(id)pregateFailureReasonsToString:(int)arg0 ;
-(BOOL)exposuresViolateThresholdFraction:(float)arg0 exposure1:(float)arg1 exposure2:(float)arg2 ;
-(BOOL)findFrameIndicesInFrameArray:(id)arg0 forTimeRange:(struct ? )arg1 startIndex:(*int)arg2 endIndex:(*int)arg3 ;
-(BOOL)findNextNonInterpFrameFromIndex:(NSInteger)arg0 backwards:(BOOL)arg1 inFrameInfoArray:(id)arg2 toValue:(*NSInteger)arg3 ;
-(BOOL)findSurroundingNonInterpForIndex:(NSInteger)arg0 inFrameInfoArray:(id)arg1 prevIndex:(*NSInteger)arg2 nextIndex:(*NSInteger)arg3 ;
-(BOOL)frameIndexIsFocusing:(NSInteger)arg0 inFrameData:(id)arg1 failureReason:(*int)arg2 ;
-(BOOL)getParamForKey:(id)arg0 toCMTime:(struct ? *)arg1 ;
-(BOOL)getParamForKey:(id)arg0 toFloat:(*float)arg1 ;
-(BOOL)getParamForKey:(id)arg0 toInt:(*NSInteger)arg1 ;
-(BOOL)subsegmentMeetsTrimCriteriaForFrames:(id)arg0 firstFrame:(NSInteger)arg1 lastFrame:(NSInteger)arg2 firstFrameTimeOut:(struct ? *)arg3 lastFrameTimeOut:(struct ? *)arg4 preciseTrimTimeOut:(struct ? *)arg5 ;
-(NSInteger)findLongestPassingSegmentInFrameFlags:(id)arg0 startIndex:(NSInteger)arg1 endIndex:(NSInteger)arg2 startOfRun:(*NSInteger)arg3 gatingFailures:(*int)arg4 ;
-(id)init;
-(id)paramValueForKey:(id)arg0 ;
-(int)fetchVideoDimensionsFromMetadata;
-(int)findGatingPassViaTrimming:(id)arg0 ;
-(int)getFocusDataFromFrameData:(id)arg0 toFocusingFlags:(id)arg1 ;
-(int)getFrameMetadataArray:(*id)arg0 ;
-(int)getPerFrameGatingData:(id)arg0 firstIndex:(NSInteger)arg1 lastIndex:(NSInteger)arg2 ;
-(int)getZoomFlagsFromFrameData:(id)arg0 toArray:(id)arg1 ;
-(int)isCumulativePanAcceptableForFrames:(id)arg0 firstIndex:(NSInteger)arg1 lastIndex:(NSInteger)arg2 ;
-(int)processGainAndExposureData:(id)arg0 intoFlagsArray:(id)arg1 firstIndex:(NSInteger)arg2 lastIndex:(NSInteger)arg3 ;
-(int)processMotionVectorsFromFrameData:(id)arg0 toVectorArray:(struct MetadataFloatVector *)arg1 ;
-(int)processPregateSuccess:(*int)arg0 ;
-(int)processPresentationTimesFromData:(id)arg0 toBadFrameFlags:(id)arg1 withMaxDuration:(struct ? )arg2 maxInterpGapTime:(struct ? )arg3 maxInterpFrameCount:(NSInteger)arg4 firstIndex:(NSInteger)arg5 lastIndex:(NSInteger)arg6 ;
-(struct ? )timeForFrameFromArray:(id)arg0 frameIndex:(NSInteger)arg1 ;
-(struct MetadataFloatVector )cumulativePanForStartIndex:(NSInteger)arg0 lastIndex:(NSInteger)arg1 ;


@end


#endif