// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRDATARECORDER_H
#define PRDATARECORDER_H

@class NSMutableDictionary, NSMutableArray;
@protocol PRItemLocalizerDataRecorder;

#import <Foundation/Foundation.h>


@interface PRDataRecorder : NSObject <PRItemLocalizerDataRecorder>



@property (retain, nonatomic) NSMutableDictionary *customData; // ivar: _customData
@property (retain, nonatomic) NSMutableArray *estimatorInput; // ivar: _estimatorInput
@property (retain, nonatomic) NSMutableArray *estimatorOutput; // ivar: _estimatorOutput
@property (retain, nonatomic) NSMutableArray *measurements; // ivar: _measurements
@property (retain, nonatomic) NSMutableArray *rangeEstimatorOutput; // ivar: _rangeEstimatorOutput


+(id)generateFilename;
+(id)generateTemporaryDirectoryURL;
-(id)init;
-(id)stopAndSave;
-(id)writeToURL;
-(void)discardSensorData;
-(void)recordCustomData:(id)arg0 forKey:(id)arg1 ;
-(void)recordEstimatorInput:(id)arg0 ;
-(void)recordPoseMeasurement:(id)arg0 ;
-(void)recordProximityMeasurement:(id)arg0 ;
-(void)recordRangeEstimate:(id)arg0 ;
-(void)recordTargetEstimates:(id)arg0 ;
-(void)recordTargetMovingStateChanged:(BOOL)arg0 atTime:(CGFloat)arg1 ;
-(void)start;
-(void)stopAndDiscard;
-(void)writeSensorDataToURL:(id)arg0 ;


@end


#endif