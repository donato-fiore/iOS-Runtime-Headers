// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITPROTOSETTINGS_H
#define PUPHOTOEDITPROTOSETTINGS_H

@class PXSettings;



@interface PUPhotoEditProtoSettings : PXSettings {
    BOOL _enableCPVEditing;
    BOOL _disableTimelineAnimations;
}


@property (nonatomic) CGFloat adjustmentLabelPlatterAlpha; // ivar: _adjustmentLabelPlatterAlpha
@property (nonatomic) BOOL allAssetsCanUseHDRPipeline; // ivar: _allAssetsCanUseHDRPipeline
@property (nonatomic) BOOL allowAnyPlugin; // ivar: _allowAnyPlugin
@property (nonatomic) BOOL allowApertureRedEye; // ivar: _allowApertureRedEye
@property (nonatomic) BOOL allowMakePosterFrameForVideo; // ivar: _allowMakePosterFrameForVideo
@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures; // ivar: _allowSpillMatteOnOlderPortraitV2Captures
@property (nonatomic) BOOL alwaysAllowKeyPhotoEditing; // ivar: _alwaysAllowKeyPhotoEditing
@property (nonatomic) BOOL alwaysShowDoneButton; // ivar: _alwaysShowDoneButton
@property (nonatomic) BOOL alwaysShowPortraitV2; // ivar: _alwaysShowPortraitV2
@property (nonatomic) BOOL alwaysShowValueWhenAdjustmentIsSelected; // ivar: _alwaysShowValueWhenAdjustmentIsSelected
@property (nonatomic) BOOL applyVideoOrientationAsMetadata; // ivar: _applyVideoOrientationAsMetadata
@property (nonatomic) BOOL attemptEditExtensionUndoAutoSetup; // ivar: _attemptEditExtensionUndoAutoSetup
@property (nonatomic) BOOL autoCropEnabled; // ivar: _autoCropEnabled
@property (nonatomic) BOOL autoPerspectiveDisableOnFrontFacingCameraImages; // ivar: _autoPerspectiveDisableOnFrontFacingCameraImages
@property (nonatomic) BOOL autoPerspectiveDisableOnPanos; // ivar: _autoPerspectiveDisableOnPanos
@property (nonatomic) CGFloat autoPerspectiveMaxAngle; // ivar: _autoPerspectiveMaxAngle
@property (nonatomic) CGFloat autoPerspectiveMaxFaceSize; // ivar: _autoPerspectiveMaxFaceSize
@property (nonatomic) CGFloat autoPerspectiveMaxPitch; // ivar: _autoPerspectiveMaxPitch
@property (nonatomic) CGFloat autoPerspectiveMaxYaw; // ivar: _autoPerspectiveMaxYaw
@property (nonatomic) CGFloat autoStraightenMaxAngle; // ivar: _autoStraightenMaxAngle
@property (nonatomic) BOOL cropMaskBlurred; // ivar: _cropMaskBlurred
@property (nonatomic) CGFloat cropRecomposeDelay; // ivar: _cropRecomposeDelay
@property (nonatomic) CGFloat cropSideMargins; // ivar: _cropSideMargins
@property (nonatomic) CGFloat cropWheelSize; // ivar: _cropWheelSize
@property (nonatomic) BOOL disableAsynchronousRenderingVideos; // ivar: _disableAsynchronousRenderingVideos
@property (nonatomic) BOOL disableIOSurfacePortaitExport; // ivar: _disableIOSurfacePortaitExport
@property (nonatomic) BOOL disablePacked10BitPixelFormats; // ivar: _disablePacked10BitPixelFormats
@property (nonatomic) BOOL disableTimelineAnimations;
@property (nonatomic) BOOL disableVideoFilmstrip; // ivar: _disableVideoFilmstrip
@property (nonatomic) BOOL enableCPVEditing;
@property (nonatomic) BOOL enableCoreImageDebugInputs; // ivar: _enableCoreImageDebugInputs
@property (nonatomic) BOOL enableCoreImageDebugIntermediates; // ivar: _enableCoreImageDebugIntermediates
@property (nonatomic) BOOL enableCoreImageDebugMode; // ivar: _enableCoreImageDebugMode
@property (nonatomic) BOOL enableCoreImageDebugOutputs; // ivar: _enableCoreImageDebugOutputs
@property (nonatomic) BOOL enableCoreImageDebugTiming; // ivar: _enableCoreImageDebugTiming
@property (nonatomic) BOOL enableEnterEditCropAutoCalc; // ivar: _enableEnterEditCropAutoCalc
@property (nonatomic) BOOL enableEnterEditDepthEffectAutoCalc; // ivar: _enableEnterEditDepthEffectAutoCalc
@property (nonatomic) BOOL enableEnterEditFilterThumbnailGeneration; // ivar: _enableEnterEditFilterThumbnailGeneration
@property (nonatomic) BOOL enableEnterEditPerspectiveAutoCalc; // ivar: _enableEnterEditPerspectiveAutoCalc
@property (nonatomic) BOOL enableEnterEditPortraitAutoCalc; // ivar: _enableEnterEditPortraitAutoCalc
@property (nonatomic) BOOL enableEnterEditSmartColorAutoCalc; // ivar: _enableEnterEditSmartColorAutoCalc
@property (nonatomic) BOOL enableEnterEditSmartToneAutoCalc; // ivar: _enableEnterEditSmartToneAutoCalc
@property (nonatomic) BOOL enableFinalizerGesture; // ivar: _enableFinalizerGesture
@property (nonatomic) BOOL enableLiveVideoRender; // ivar: _enableLiveVideoRender
@property (nonatomic) BOOL enableNURenderJobDebug; // ivar: _enableNURenderJobDebug
@property (nonatomic) BOOL enablePerfDebugHUD; // ivar: _enablePerfDebugHUD
@property (nonatomic) BOOL enablePerfTTRButton; // ivar: _enablePerfTTRButton
@property (nonatomic) BOOL enableReframeDebugHUD; // ivar: _enableReframeDebugHUD
@property (nonatomic) BOOL enableSemanticDevelopmentHUD; // ivar: _enableSemanticDevelopmentHUD
@property (nonatomic) BOOL enableVideoStabilizion; // ivar: _enableVideoStabilizion
@property (nonatomic) BOOL forceGlassesMatteOff; // ivar: _forceGlassesMatteOff
@property (nonatomic) BOOL forceSpillMatteOff; // ivar: _forceSpillMatteOff
@property (nonatomic) BOOL hideTrackersDuringPlayback; // ivar: _hideTrackersDuringPlayback
@property (nonatomic) BOOL loopBounceTrimAllowed; // ivar: _loopBounceTrimAllowed
@property (nonatomic) BOOL nuRenderJobDebugCapture5PercentOfJobs; // ivar: _nuRenderJobDebugCapture5PercentOfJobs
@property (nonatomic) BOOL nuRenderJobDebugCaptureCanceledJobs; // ivar: _nuRenderJobDebugCaptureCanceledJobs
@property (nonatomic) BOOL nuRenderJobDebugCaptureNodeCache; // ivar: _nuRenderJobDebugCaptureNodeCache
@property (nonatomic) BOOL nuRenderJobDebugCaptureNodeGraphs; // ivar: _nuRenderJobDebugCaptureNodeGraphs
@property (nonatomic) BOOL nuRenderJobDebugCaptureOnlyPerfStats; // ivar: _nuRenderJobDebugCaptureOnlyPerfStats
@property (nonatomic) BOOL nuRenderJobDebugCapturePerfStatHistory; // ivar: _nuRenderJobDebugCapturePerfStatHistory
@property (nonatomic) BOOL overrideVideoEditability; // ivar: _overrideVideoEditability
@property (nonatomic) BOOL pauseAfterMovingPlayhead; // ivar: _pauseAfterMovingPlayhead
@property (nonatomic) BOOL perspectiveViewDebugCropEnabled; // ivar: _perspectiveViewDebugCropEnabled
@property (nonatomic) CGFloat previewOriginalDuration; // ivar: _previewOriginalDuration
@property (nonatomic) BOOL previewOriginalTimesOut; // ivar: _previewOriginalTimesOut
@property (nonatomic) BOOL renderBackfillBlue; // ivar: _renderBackfillBlue
@property (nonatomic) NSInteger renderPriority; // ivar: _renderPriority
@property (nonatomic) BOOL renderZoomPurple; // ivar: _renderZoomPurple
@property (nonatomic) BOOL requireTapToShowMakePosterFrame; // ivar: _requireTapToShowMakePosterFrame
@property (nonatomic) BOOL runNeutrinoSynchronously; // ivar: _runNeutrinoSynchronously
@property (nonatomic) CGFloat selectionRingStrokeWidth; // ivar: _selectionRingStrokeWidth
@property (nonatomic) BOOL showEffectsPicker; // ivar: _showEffectsPicker
@property (nonatomic) BOOL showFileRadarButtonForEditEntryOnInternalInstalls; // ivar: _showFileRadarButtonForEditEntryOnInternalInstalls
@property (nonatomic) BOOL showFrameNumberOnVideoScrubber; // ivar: _showFrameNumberOnVideoScrubber
@property (nonatomic) BOOL showHDRDebugAdjustments; // ivar: _showHDRDebugAdjustments
@property (nonatomic) BOOL showResetToolButton; // ivar: _showResetToolButton
@property (nonatomic) BOOL showSemanticDevelopmentSwitch; // ivar: _showSemanticDevelopmentSwitch
@property (nonatomic) BOOL showSmartBlackAndWhiteAdjustment; // ivar: _showSmartBlackAndWhiteAdjustment
@property (nonatomic) BOOL showStabilizationWatermark; // ivar: _showStabilizationWatermark
@property (nonatomic) BOOL showSuggestedKeyFrame; // ivar: _showSuggestedKeyFrame
@property (nonatomic) BOOL showVideoScrubberDebugOverlay; // ivar: _showVideoScrubberDebugOverlay
@property (nonatomic) BOOL simulateDownload; // ivar: _simulateDownload
@property (nonatomic) BOOL simulateDownloadFailure; // ivar: _simulateDownloadFailure
@property (nonatomic) BOOL simulateEditEntryError; // ivar: _simulateEditEntryError
@property (nonatomic) NSInteger simulatedEditingEntryErrorType; // ivar: _simulatedEditingEntryErrorType
@property (nonatomic) BOOL skipPHContentEditingInputDisplaySizeImage; // ivar: _skipPHContentEditingInputDisplaySizeImage
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (nonatomic) BOOL tapTimelineToSeek; // ivar: _tapTimelineToSeek
@property (nonatomic) CGFloat trackBallSize; // ivar: _trackBallSize
@property (nonatomic) CGFloat ttrButtonDurationThreshold; // ivar: _ttrButtonDurationThreshold
@property (nonatomic) BOOL useAsynchronousRenderingPhotos; // ivar: _useAsynchronousRenderingPhotos
@property (nonatomic) NSUInteger videoCompositorDebugMode; // ivar: _videoCompositorDebugMode
@property (nonatomic) CGFloat videoStabilizeMaxCropFraction; // ivar: _videoStabilizeMaxCropFraction


+(BOOL)isCapableOfLivePhotoRender;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)showHDRDebugAdjustment;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)updateCoreImageDebug;


@end


#endif