// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDDETECTORMANAGER_H
#define AXSDDETECTORMANAGER_H

@class SNAudioStreamAnalyzer, NSMutableDictionary, NSArray, SNDetectSoundRequest, NSString;
@protocol SNResultsObserving, AXSDDetectorManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDDetectorManager : NSObject <SNResultsObserving>

 {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSMutableDictionary *_currentAssetIdsByType;
    NSMutableDictionary *_currentRequestsByAssetID;
}


@property (readonly, nonatomic) NSArray *currentDetectors;
@property (retain, nonatomic) SNDetectSoundRequest *currentGeneralApplianceRequest; // ivar: _currentGeneralApplianceRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDDetectorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detectorRequestForDetector:(id)arg0 ;
+(id)detectorRequestForGeneralApplianceDetector;
+(id)modelPathForURL:(id)arg0 detectionType:(id)arg1 ;
+(void)initializeModelMap;
+(void)setTestBundle:(id)arg0 ;
-(BOOL)_testAudioFile:(id)arg0 ;
-(BOOL)addAllDetectors;
-(BOOL)addDetector:(id)arg0 ;
-(BOOL)addDetectorType:(id)arg0 ;
-(BOOL)addGeneralApplianceDetector;
-(BOOL)removeDetector:(id)arg0 ;
-(BOOL)removeDetectorType:(id)arg0 ;
-(BOOL)removeGeneralApplianceDetector;
-(BOOL)startDetectionWithFormat:(id)arg0 ;
-(BOOL)startGeneralApplianceDetectionWithFormat:(id)arg0 ;
-(BOOL)streamAnalyzerIsRunning;
-(id)_currentAssetIDForDetectionType:(id)arg0 ;
-(id)_currentRequestForDetectionType:(id)arg0 ;
-(id)_currentRequests;
-(id)detectorRequestForDetectionType:(id)arg0 ;
-(id)init;
-(void)_addCurrentRequest:(id)arg0 withDetector:(id)arg1 ;
-(void)_removeCurrentRequestForDetectionType:(id)arg0 ;
-(void)processAudioBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)removeAllDetectors;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;
-(void)stopDetection;


@end


#endif