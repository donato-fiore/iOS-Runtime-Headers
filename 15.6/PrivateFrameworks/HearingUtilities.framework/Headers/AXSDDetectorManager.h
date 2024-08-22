// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDDETECTORMANAGER_H
#define AXSDDETECTORMANAGER_H

@class SNAudioStreamAnalyzer, NSMutableDictionary, NSArray, NSString;
@protocol SNResultsObserving, AXSDDetectorManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDDetectorManager : NSObject <SNResultsObserving>

 {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSMutableDictionary *_currentRequests;
}


@property (readonly, nonatomic) NSArray *currentDetectors;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDDetectorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detectorRequestForDetectionType:(id)arg0 ;
+(id)modelPathForURL:(id)arg0 detectionType:(id)arg1 ;
+(void)initializeModelMap;
+(void)setTestBundle:(id)arg0 ;
-(BOOL)_testAudioFile:(id)arg0 ;
-(BOOL)addAllDetectors;
-(BOOL)addDetector:(id)arg0 ;
-(BOOL)removeDetector:(id)arg0 ;
-(BOOL)startDetectionWithFormat:(id)arg0 ;
-(BOOL)streamAnalyzerIsRunning;
-(id)init;
-(void)processAudioBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)removeAllDetectors;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;
-(void)stopDetection;


@end


#endif