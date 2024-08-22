// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERMUTABLEREPORT_H
#define HMIVIDEOANALYZERMUTABLEREPORT_H

@class HMFObject, NSData, NSString, NSDictionary, NSSet, NSMutableDictionary;
@protocol NSSecureCoding, HMFLogging;



@interface HMIVideoAnalyzerMutableReport : HMFObject <NSSecureCoding, HMFLogging>



@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *deviceInformation; // ivar: _deviceInformation
@property (readonly) NSSet *eventClasses;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSMutableDictionary *sessions; // ivar: _sessions
@property (readonly) Class superclass;
@property (readonly) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)chartSpecWithRange:(struct CGRect )arg0 colors:(id)arg1 labels:(id)arg2 ;
+(id)greedyMatchBetweenPredictionEvents:(id)arg0 truthEvents:(id)arg1 falsePositiveIndices:(id)arg2 falseNegativeIndices:(id)arg3 eventClass:(Class)arg4 regionOfInterest:(struct CGRect )arg5 confidenceThreshold:(float)arg6 scoreThreshold:(float)arg7 scoreFunction:(id)arg8 ;
+(id)logCategory;
+(id)systemDeviceInformation;
+(void)sihouetteScoreForMatches:(id)arg0 previousMatches:(id)arg1 truePositiveScores:(id)arg2 falsePositiveScores:(id)arg3 falseNegativeScores:(id)arg4 ;
+(void)writeImageCropFromFrame:(id)arg0 events:(id)arg1 outputPath:(id)arg2 source:(id)arg3 ;
+(void)writeJSONChartData:(id)arg0 outputPath:(id)arg1 ;
-(id)averagePrecisionForMinPrecision:(float)arg0 comparator:(id)arg1 ;
-(id)averagePrecisionWithClassificationTruth:(id)arg0 minPrecision:(float)arg1 ;
-(id)averagePrecisionWithDetectionTruth:(id)arg0 minPrecision:(float)arg1 iouThreshold:(float)arg2 videoMetric:(BOOL)arg3 ;
-(id)chartDataWithBaseline:(BOOL)arg0 comparator:(id)arg1 ;
-(id)chartDataWithClassificationTruth:(id)arg0 isBaseline:(BOOL)arg1 ;
-(id)chartDataWithDetectionTruth:(id)arg0 isBaseline:(BOOL)arg1 iouThreshold:(float)arg2 videoMetric:(BOOL)arg3 ;
-(id)compareWithClassificationTruth:(id)arg0 eventClass:(Class)arg1 confidenceThreshold:(float)arg2 ;
-(id)compareWithDetectionTruth:(id)arg0 eventClass:(Class)arg1 confidenceThreshold:(float)arg2 iouThreshold:(float)arg3 videoMetric:(BOOL)arg4 ;
-(id)compareWithTrackingTruth:(id)arg0 eventClass:(Class)arg1 confidenceThreshold:(float)arg2 ioaThreshold:(float)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)selectFramesWithRecord:(id)arg0 truth:(id)arg1 frameResults:(id)arg2 ;
-(id)truthReportFromLegacyClassificationFormat:(id)arg0 ;
-(id)truthReportFromLegacyDetectionFormat:(id)arg0 ;
-(void)appendFragmentResult:(id)arg0 forKey:(id)arg1 source:(id)arg2 redactFrames:(BOOL)arg3 ;
-(void)appendFragmentResultsFromReport:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeFragmentFileComparison:(id)arg0 eventClass:(Class)arg1 outputPath:(id)arg2 ;
-(void)writeHTMLReportComparison:(id)arg0 truth:(id)arg1 eventClass:(Class)arg2 comparisonType:(id)arg3 assetPath:(id)arg4 outputPath:(id)arg5 limit:(NSUInteger)arg6 shuffle:(BOOL)arg7 ;
-(void)writeImageCropForEventClass:(Class)arg0 outputPath:(id)arg1 assetPath:(id)arg2 ;


@end


#endif