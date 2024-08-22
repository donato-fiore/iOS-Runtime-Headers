// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16SIRIVIDEOINTENTS26PLAYMEDIAAPPSELECTIONINPUT_H
#define _TTC16SIRIVIDEOINTENTS26PLAYMEDIAAPPSELECTIONINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC16SiriVideoIntents26PlayMediaAppSelectionInput : SwiftObject <MLFeatureProvider>

 {
    ? result_appUsageScore1Day;
    ? result_appUsageScore7Days;
    ? supports_general;
    ? supports_audiobooks;
    ? supports_podcasts;
    ? result_nowPlayingUsage7Days;
    ? result_foregroundAppIsLastUsed;
    ? result_foregroundAppDuetElapsedSeconds;
    ? result_clientCarConnected;
    ? result_clientCarplay;
    ? result_clientDaylight;
    ? result_clientDevice;
    ? result_clientHourOfDay;
    ? result_clientIsActiveForegroundApp;
    ? result_clientLocaleIdentifier;
    ? result_clientLocaleLanguage;
    ? result_clientLocked;
    ? result_clientMotion;
    ? result_clientNavigating;
    ? result_clientWorkout;
    ? result_entitySearchAllTimeInteractionShare;
    ? result_entitySearchNormalizedSecondsSinceLastInteraction;
    ? result_entitySearchTrailing10MinuteInteractionShare;
    ? result_entitySearchTrailing1DayInteractionShare;
    ? result_entitySearchTrailing1HourInteractionShare;
    ? result_entitySearchTrailing28DayInteractionShare;
    ? result_entitySearchTrailing2MinuteInteractionShare;
    ? result_entitySearchTrailing6HourInteractionShare;
    ? result_entitySearchTrailing7DayInteractionShare;
    ? result_mediaNamePresent;
    ? result_mediaType;
    ? result_isNowPlayingDuetApp;
    ? result_nowPlayingDuetElapsedSeconds;
    ? result_nowPlayingState;
    ? result_spotlightMatches;
    ? result_libraryItems;
    ? result_subscriptionStatus;
    ? result_isNowPlayingApp;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif