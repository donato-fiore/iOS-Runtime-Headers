// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23SIRIINVOCATIONANALYTICS24VOICETRIGGEREVENTSUMMARY_H
#define _TTC23SIRIINVOCATIONANALYTICS24VOICETRIGGEREVENTSUMMARY_H

@class SwiftObject;



@interface _TtC23SiriInvocationAnalytics24VoiceTriggerEventSummary : SwiftObject {
    ? firstPassDetectionTimestampInSec;
    ? firstPassPeakScoreHS;
    ? firstPassPeakScoreJS;
    ? invocationTypeId;
    ? triggerScoreHS;
    ? triggerScoreJS;
    ? mitigationScore;
    ? tdSpeakerRecognizerCombinedScore;
    ? triggerScoreHSThreshold;
    ? triggerScoreJSThreshold;
    ? mitigationScoreThreshold;
    ? tdSpeakerRecognizerCombinedThreshold;
    ? voiceTriggerConfigVersion;
    ? userActionTimeThreshold;
    ? hasNextTurn;
    ? timeDeltaToNextTurnInSec;
    ? nextTurnId;
    ? nextTurnInvocationSource;
    ? isNextTurnValid;
    ? repetitionSimilarityScore;
    ? hasNextRejection;
    ? timeDeltaToNextRejectionInSec;
    ? hasAppLaunchEvent;
    ? timeDeltaToAppLaunchInSec;
    ? hasAppIntentEvent;
    ? timeDeltaToAppIntentEventInSec;
    ? hasTextInputEvent;
    ? timeDeltaToTextInputInSec;
    ? hasDeviceUnlockEvent;
    ? timeDeltaToDeviceUnlockInSec;
}






@end


#endif