// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV16MAGNIFIERSUPPORT13MFENVIRONMENT12USERCONTROLS_H
#define _TTCV16MAGNIFIERSUPPORT13MFENVIRONMENT12USERCONTROLS_H

@class TtCV16MagnifierSupport13MFEnvironment8Category;



@interface _TtCV16MagnifierSupport13MFEnvironment12UserControls : TtCV16MagnifierSupport13MFEnvironment8Category {
    ? _colorFilter;
    ? _selectedFilters;
    ? flashlightIsAvailable;
    ? _userIncludedFlashlightInControls;
    ? _grabberSelected;
    ? contentSizeCategoryPublisher;
    ? _primaryControls;
    ? _secondaryControls;
    ? _cameraType;
    ? _storedSelectedFilters;
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
    ? _peopleDetectionUnit;
    ? _peopleDetectionPitchThreshold;
    ? _selectedPeopleDetectionFeedbacks;
    ? _personDetectionAudioBalancing;
    ? _peopleDetectionDebugOption;
    ? _personDetectionCenterDetection;
    ? selectedPeopleDetectionReplayFile;
    ? selectedPeopleDetectionRecordingOptions;
    ? _peopleDetectionSpeechFeedbackWasModified;
    ? _peopleDetectionSpeechFeedbackWasModifiedByVoiceOver;
    ? _storedSelectedPeopleDetectionRecordingOptions;
}




-(void)modifyFeedbacksForVoiceOverWithNotification:(id)arg0 ;


@end


#endif