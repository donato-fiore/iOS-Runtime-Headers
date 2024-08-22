// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV16MAGNIFIERSUPPORT13MFENVIRONMENT12USERCONTROLS_H
#define _TTCV16MAGNIFIERSUPPORT13MFENVIRONMENT12USERCONTROLS_H

@class TtCV16MagnifierSupport13MFEnvironment8Category;



@interface _TtCV16MagnifierSupport13MFEnvironment12UserControls : TtCV16MagnifierSupport13MFEnvironment8Category {
    ? _storedActivities;
    ? intermediateActivity;
    ? _currentActivity;
    ? _isCurrentActivityUpdated;
    ? _activityZoomPercentage;
    ? _magnifierInDebugState;
    ? _doorDetectionColor;
    ? doorAttributesAssetDownloaded;
    ? doorAttributesAssetDownloading;
    ? doorSignsAssetDownloaded;
    ? doorSignsAssetDownloading;
    ? _doorAttributesToggledOnAfterSuccessfulDownload;
    ? _doorSignsToggledOnAfterSuccessfulDownload;
    ? _colorFilter;
    ? _isFilterInActivityPresets;
    ? _selectedFilters;
    ? flashlightIsAvailable;
    ? _userIncludedFlashlightInControls;
    ? _grabberSelected;
    ? contentSizeCategoryPublisher;
    ? _primaryControls;
    ? _secondaryControls;
    ? languageTranslator;
    ? _cameraType;
    ? _storedSelectedFilters;
    ? _selectedAttributes;
    ? _mode;
    ? _isReviewing;
    ? _isUsingFrontCamera;
    ? _zoomPercentage;
    ? _flashlightPercentage;
    ? _storedColorFilter;
    ? _brightness;
    ? _contrast;
    ? _cardPosition;
    ? _peopleDetection;
    ? _doorDetection;
    ? _detectionModeOn;
    ? _imageCaption;
    ? _doorDetectionExitStatus;
    ? _peopleDetectionExitStatus;
    ? _imageCaptionExitStatus;
    ? _detectionUnit;
    ? _detectionPitchThreshold;
    ? _selectedPeopleDetectionFeedbacks;
    ? _selectedImageCaptionFeedbacks;
    ? _detectionAudioBalancing;
    ? _detectionDebugOption;
    ? _detectionCenterDetection;
    ? selectedDetectionReplayFile;
    ? selectedDetectionRecordingOptions;
    ? _peopleDetectionSpeechFeedbackWasModified;
    ? _peopleDetectionSpeechFeedbackWasModifiedByVoiceOver;
    ? _imageCaptionSpeechFeedbackWasModified;
    ? _imageCaptionSpeechFeedbackWasModifiedByVoiceOver;
    ? _doorDetectionSpeechFeedbackWasModified;
    ? _doorDetectionSpeechFeedbackWasModifiedByVoiceOver;
    ? _storedSelectedDetectionRecordingOptions;
    ? _doorDetectionPitchThreshold;
    ? _selectedDoorDetectionFeedbacks;
    ? _doorDetectionAttributes;
    ? _doorDetectionDecorations;
    ? _backTapEnabled;
}




-(void)modifyFeedbacksForVoiceOverWithNotification:(id)arg0 ;


@end


#endif