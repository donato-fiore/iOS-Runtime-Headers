// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUFEATUREFLAGS_H
#define TUFEATUREFLAGS_H

@class NSString;
@protocol TUFeatureFlags;

#import <Foundation/Foundation.h>


@interface TUFeatureFlags : NSObject <TUFeatureFlags>



@property (readonly, nonatomic) BOOL FTUserScore;
@property (readonly, nonatomic) BOOL TTRBannerEnabled;
@property (readonly, nonatomic) BOOL aTVHandoff;
@property (readonly, nonatomic) BOOL announceCalls;
@property (readonly, nonatomic) BOOL conversationOneToOneModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expanseBTSwitchingEnabled;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL ftvSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL gondolaBoat;
@property (readonly, nonatomic) BOOL gondolaCreateCallUI;
@property (readonly, nonatomic) BOOL gondolaEnforceDelegationIntent;
@property (readonly, nonatomic) BOOL gondolaNotifications;
@property (readonly, nonatomic) BOOL gondolaOar;
@property (readonly, nonatomic) BOOL gondolaOpenLinksInFaceTime;
@property (readonly, nonatomic) BOOL gondolaShareLinkInAdvance;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL individualAudioVideoToggleEnabled;
@property (readonly, nonatomic) BOOL kettleFeatureComplete;
@property (readonly, nonatomic) BOOL livePhotoXPCServiceEnabled;
@property (readonly, nonatomic) BOOL nonInterruptingCalls;
@property (readonly, nonatomic) BOOL qrPluginEnabled;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL sharePlayDisabled;
@property (readonly, nonatomic) BOOL suggestionsReloadForSelectedRecipients;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsScreenSharing;




@end


#endif