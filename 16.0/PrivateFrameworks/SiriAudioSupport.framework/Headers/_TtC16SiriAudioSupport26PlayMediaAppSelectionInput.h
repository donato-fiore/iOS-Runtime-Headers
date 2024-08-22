// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRIAUDIOSUPPORT26PLAYMEDIAAPPSELECTIONINPUT_H
#define _TTC16SIRIAUDIOSUPPORT26PLAYMEDIAAPPSELECTIONINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC16SiriAudioSupport26PlayMediaAppSelectionInput : SwiftObject <MLFeatureProvider>

 {
    ? support_unicorn_match;
    ? type3;
    ? vq_21;
    ? INMediaCategoryVideo;
    ? result_nowPlayingLastBundleRecency;
    ? INMediaCategoryGeneral;
    ? type14;
    ? type18;
    ? type10;
    ? type17;
    ? result_compoundMediaTypeBundleScore;
    ? support_flag;
    ? INMediaCategoryMusic;
    ? result_compoundActiveBundleScore;
    ? INMediaCategoryRadio;
    ? result_clientLocaleIdentifier;
    ? INMediaCategoryPodcasts;
    ? type0;
    ? type2;
    ? unicorn_flag;
    ? result_entitySearchBundleScore;
    ? result_mediaNamePresent;
    ? result_mediaArtistPresent;
    ? result_clientHourOfDay;
    ? type5;
    ? INMediaCategoryAudiobooks;
    ? type16;
    ? type4;
    ? type6;
    ? type1;
    ? result_nowPlayingUsage1Day;
    ? result_nowPlayingBundleScore;
    ? result_foregroundBundle;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif