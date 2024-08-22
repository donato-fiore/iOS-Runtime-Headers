// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMETADATADETECTORGATINGNODE_H
#define BWMETADATADETECTORGATINGNODE_H

@class NSMutableArray, NSString;
@protocol BWMRCSceneObserver, OS_dispatch_group, BWMetadataDetectedResultsObserver;


#import "BWFanOutNode.h"
#import "BWMetadataDetectorGatingOutputController.h"
#import "BWPixelBufferPool.h"
#import "BWSceneStabilityMonitor.h"
#import "BWNodeOutput.h"

@interface BWMetadataDetectorGatingNode : BWFanOutNode <BWMRCSceneObserver>

 {
    BWMetadataDetectorGatingOutputController *_mrcOutputController;
    BWMetadataDetectorGatingOutputController *_appClipCodeOutputController;
    BWMetadataDetectorGatingOutputController *_textLocalizationOutputController;
    NSMutableArray *_outputControllers;
    BOOL _lowPowerModeEnabled;
    NSObject<OS_dispatch_group> *_detectorsAvailableGroup;
    BOOL _needsSynchronization;
    *OpaqueVTPixelTransferSession _transferSession;
    BWPixelBufferPool *_outputBufferPool;
    ? _outputBufferPoolDimensions;
    os_unfair_lock_s _sceneLock;
    BWSmartCameraScene _qrCodeScene;
    BWSmartCameraScene _appClipCodeScene;
    BWSmartCameraScene _qrCodeSceneForAppClipCode;
    BWSmartCameraScene _appClipCodeSceneWithQRCodes;
    BWSmartCameraScene _documentScene;
    BWSmartCameraScene _textScene;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
}


@property (readonly, nonatomic) BWNodeOutput *appClipCodeOutput; // ivar: _appClipCodeOutput
@property (readonly, nonatomic) NSObject<BWMetadataDetectedResultsObserver> *appClipCodeResultsObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeOutput *mrcOutput; // ivar: _mrcOutput
@property (readonly, nonatomic) NSObject<BWMetadataDetectedResultsObserver> *mrcResultsObserver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BWNodeOutput *textLocalizationOutput; // ivar: _textLocalizationOutput
@property (readonly, nonatomic) NSObject<BWMetadataDetectedResultsObserver> *textLocalizationResultsObserver;


+(void)initialize;
-(BOOL)_anyOutputShouldApplySceneMotion;
-(BOOL)_anyOutputShouldRunDetection;
-(id)_pixelFormatsSupportedByMRCAlgorithm;
-(id)initWithMRCEnabled:(BOOL)arg0 appClipCodeEnabled:(BOOL)arg1 textLocalizationEnabled:(BOOL)arg2 lowPowerModeEnabled:(BOOL)arg3 ;
-(id)initWithSceneClassifierVersion:(struct ? )arg0 mrcEnabled:(BOOL)arg1 appClipCodeEnabled:(BOOL)arg2 textLocalizationEnabled:(BOOL)arg3 lowPowerModeEnabled:(BOOL)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_ensureOutputBufferPoolWithDimensions:(struct ? )arg0 ;
-(int)_ensureTransferSession;
-(struct __CVBuffer *)_createOutputPixelBufferFromSbuf:(struct opaqueCMSampleBuffer *)arg0 appliedPrimaryCaptureRect:(*BOOL)arg1 ;
-(void)_synchronizeOutputControllersWhenApplicable;
-(void)_updateInputRequirements;
-(void)_updateNodeOutputPassthroughMode:(int)arg0 ;
-(void)_updateOutputRequirementsIfNecessary;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)sceneDidChangeQRConfidence:(float)arg0 appClipCodeConfidence:(float)arg1 documentConfidence:(float)arg2 textConfidence:(float)arg3 ;


@end


#endif