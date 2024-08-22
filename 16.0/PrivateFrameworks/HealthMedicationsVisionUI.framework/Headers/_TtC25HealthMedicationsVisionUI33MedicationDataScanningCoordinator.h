// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC25HEALTHMEDICATIONSVISIONUI33MEDICATIONDATASCANNINGCOORDINATOR_H
#define _TTC25HEALTHMEDICATIONSVISIONUI33MEDICATIONDATASCANNINGCOORDINATOR_H

@class SwiftObject;



@interface _TtC25HealthMedicationsVisionUI33MedicationDataScanningCoordinator : SwiftObject {
    ? scanner;
    ? healthStore;
    ? dataProvider;
    ? searchEngine;
    ? resolutionEngine;
    ? ndcParser;
    ? lock;
    ? pulseTimer;
    ? cameraStartTime;
    ? targetSessionEndTime;
    ? sessionStartTime;
    ? lastUpdateTime;
    ? processingTranscript;
    ? transcriptsQueue;
    ? allTranscripts;
    ? seenTranscripts;
    ? seenMRCs;
    ? unsupportedMRCs;
    ? mrcSubject;
    ? mrcPendingSince;
    ? mrcResults;
    ? usedNgrams;
    ? aggregatedResolutionResults;
    ? resolutionCounter;
    ? dataSaturated;
    ? screenshots;
    ? _state;
    ? sessionId;
}




-(void)pulseTimerFiredWithTimer:(id)arg0 ;


@end


#endif