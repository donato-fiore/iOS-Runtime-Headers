// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSDKSHOTMODELMANAGER_H
#define AXSDKSHOTMODELMANAGER_H

@class SNAudioStreamAnalyzer, NSArray, NSMutableDictionary, NSString;
@protocol SNResultsObserving, AXSDKShotModelManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDKShotModelManager : NSObject <SNResultsObserving>

 {
    SNAudioStreamAnalyzer *_streamAnalyzer;
}


@property (readonly, nonatomic) NSArray *currentDetectors;
@property (retain, nonatomic) NSMutableDictionary *currentRequests; // ivar: _currentRequests
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDKShotModelManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modelPathForDetector:(id)arg0 ;
+(id)requestForDetector:(id)arg0 ;
-(BOOL)addCustomDetector:(id)arg0 ;
-(BOOL)removeCustomDetector:(id)arg0 ;
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