// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21SIRIREQUESTDISPATCHER21REQUESTCONTEXTMESSAGE_H
#define _TTC21SIRIREQUESTDISPATCHER21REQUESTCONTEXTMESSAGE_H

@class TtC21SiriRequestDispatcher18RequestMessageBase;



@interface _TtC21SiriRequestDispatcher21RequestContextMessage : TtC21SiriRequestDispatcher18RequestMessageBase {
    ? audioSource;
    ? audioDestination;
    ? responseMode;
    ? isEyesFree;
    ? isVoiceTriggerEnabled;
    ? isTextToSpeechEnabled;
    ? isTriggerlessFollowup;
    ? bargeInModes;
    ? approximatePreviousTTSInterval;
    ? deviceRestrictions;
}






@end


#endif