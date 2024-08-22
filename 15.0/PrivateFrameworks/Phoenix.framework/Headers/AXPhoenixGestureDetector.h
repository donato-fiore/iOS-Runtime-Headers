// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPHOENIXGESTUREDETECTOR_H
#define AXPHOENIXGESTUREDETECTOR_H

@class CMMotionManager, NSOperationQueue, NSURL, NSString;
@protocol AXPhoenixClassifierDelegate, AXPhoenixMitigatorDelegate, AXPhoenixAssetMonitorDelegate, AXPhoenixGestureDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXPhoenixClassifier.h"
#import "AXPhoenixMitigator.h"
#import "AXPhoenixConfiguration.h"
#import "AXPhoenixAnalytics.h"
#import "AXPhoenixAssetMonitor.h"

@interface AXPhoenixGestureDetector : NSObject <AXPhoenixClassifierDelegate, AXPhoenixMitigatorDelegate, AXPhoenixAssetMonitorDelegate>

 {
    CMMotionManager *_cmMotionManager;
    NSOperationQueue *_motionInputQueue;
    AXPhoenixClassifier *_classifier;
    id<AXPhoenixGestureDetectorDelegate> *_delegate;
    AXPhoenixMitigator *_mitigator;
    AXPhoenixConfiguration *_configuration;
    AXPhoenixAnalytics *_analytics;
    NSObject<OS_dispatch_queue> *_queue;
    AXPhoenixAssetMonitor *_assetMonitor;
    BOOL _clientStartedMotion;
    NSURL *_localURL;
    NSUInteger _assetVersion;
    float _tapSpeed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)urlOfModelInThisBundle;
-(BOOL)_initializeAssetDrivenComponentsWithLocalURL:(id)arg0 assetVersion:(NSUInteger)arg1 ;
-(BOOL)falsePositiveLoggingEnabled;
-(BOOL)needsToUpdateModelToVersion:(NSInteger)arg0 ;
-(id)_createClassifierModelURL;
-(id)_createConfiguration;
-(id)_mobileAssetPathForConfigOrNil;
-(id)_mobileAssetURLForModelOrNil;
-(id)initWithDelegate:(id)arg0 ;
-(void)_resetAssetDrivenComponents;
-(void)_setPolicyOption:(int)arg0 ;
-(void)_startClassifierWithCompletion:(id)arg0 ;
-(void)_startWithCompletion:(id)arg0 ;
-(void)_stopClassifier;
-(void)_stopWithCompletion:(id)arg0 ;
-(void)modelDidUpdate:(id)arg0 assetVersion:(NSUInteger)arg1 ;
-(void)phoenixClassifier:(id)arg0 failedWithError:(id)arg1 ;
-(void)phoenixClassifierDidDetectDoubleTap:(id)arg0 data:(struct ? )arg1 context:(id)arg2 ;
-(void)phoenixClassifierDidDetectTripleTap:(id)arg0 data:(struct ? )arg1 context:(id)arg2 ;
-(void)phoenixClassifierDidLogFile:(id)arg0 ;
-(void)phoenixMitigator:(id)arg0 didFailWithError:(id)arg1 ;
-(void)phoenixMitigator:(id)arg0 displayOnDidChange:(BOOL)arg1 ;
-(void)phoenixMitigator:(id)arg0 touchOnDidChange:(BOOL)arg1 ;
-(void)reportFalsePositive:(id)arg0 ;
-(void)setDoubleTapPolicy;
-(void)setFalsePositiveLoggingEnabled:(BOOL)arg0 ;
-(void)setGeneralPolicy;
-(void)setTapSpeed:(float)arg0 ;
-(void)setTripleTapPolicy;
-(void)startWithCompletion:(id)arg0 ;
-(void)stopWithCompletion:(id)arg0 ;


@end


#endif