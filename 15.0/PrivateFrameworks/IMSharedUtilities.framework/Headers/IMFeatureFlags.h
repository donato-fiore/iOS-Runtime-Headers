// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFEATUREFLAGS_H
#define IMFEATUREFLAGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface IMFeatureFlags : NSObject

@property (readonly, nonatomic) NSDictionary *CKScreenshotTestFeatureFlagMembers;
@property (readonly, nonatomic) BOOL animatedImagesBlastDoorEnabled;
@property (readonly, nonatomic) BOOL avatarViewAllowsStaleRendering;
@property (readonly, nonatomic) BOOL businessBrandedNewCompose;
@property (readonly, nonatomic) BOOL businessGreeting;
@property (readonly, nonatomic) BOOL chatCacheEnabled;
@property (readonly, nonatomic) BOOL conversationPinningMultiDragEnabled;
@property (readonly, nonatomic) BOOL conversationPinningTouchdownDimEnabled;
@property (readonly, nonatomic) BOOL conversationPinningUsesLastNameForDuplicatesEnabled;
@property (readonly, nonatomic) BOOL fullTranscriptLoggingEnabled;
@property (readonly, nonatomic) BOOL improvedPriorityInversionFixEnabled;
@property (readonly, nonatomic) BOOL isExpanseEnabled;
@property (readonly, nonatomic) BOOL macApplicationMetricsGatheringEnabled;
@property (readonly, nonatomic) BOOL macToolbarEnabled;
@property (readonly, nonatomic) BOOL mentionsEnabled;
@property (readonly, nonatomic) BOOL mentionsKeyboardSuggestionsEnabled;
@property (readonly, nonatomic) BOOL messageSyncP2Enabled;
@property (readonly, nonatomic) BOOL messagesNotificationFilteringUIEnabled;
@property (readonly, nonatomic) BOOL micGroupPhotoEnabled;
@property (readonly, nonatomic) BOOL micInlineReplyBackfillEnabled;
@property (readonly, nonatomic) BOOL newInboxViewEnabled;
@property (readonly, nonatomic) BOOL newSuggestionsBannerEnabled;
@property (readonly, nonatomic) BOOL notificationCommunicationContextEnabled;
@property (readonly, nonatomic) BOOL sendSMSAutoReplyDuringUnavailability;
@property (readonly, nonatomic) BOOL showAllInstalledMessageApps;
@property (readonly, nonatomic) BOOL showKettleAvailability;
@property (readonly, nonatomic) BOOL simPickerForMFMessageComposeViewEnabled;
@property (readonly, nonatomic) BOOL simSwitcherEnabled;
@property (readonly, nonatomic) BOOL smsMmsBlastDoorEnabled;
@property (readonly, nonatomic) BOOL smsfilterForBrazilEnabled;
@property (readonly, nonatomic) BOOL supplementalLexiconMentionsEnabled;
@property (readonly, nonatomic) BOOL systemImageAdoptionEnabled;
@property (readonly, nonatomic) BOOL threeAttachmentStackEnabled;
@property (readonly, nonatomic) BOOL threeColumnLayoutEnabled;
@property (readonly, nonatomic) BOOL translationEnabled;
@property (readonly, nonatomic) BOOL uiConsistencyEnabled;


+(id)sharedInstance;
-(BOOL)CKScreenshotTestFeatureFlagValue;
-(BOOL)allCallOptionsInNavBarButtonEnabled;
-(BOOL)certifiedDeliveryEnabled;
-(BOOL)fixIMDPersistenceAgentPriorityInversion;
-(BOOL)fixIMTranscoderAgentPriorityInversion;
-(BOOL)fixImagentPriorityInversion;
-(BOOL)hubbleCMMProcessingEnabled;
-(BOOL)hubbleTranscriptEnabled;
-(BOOL)hubbleUIEnabled;
-(BOOL)isAudioPreviewBlastDoorEnabled;
-(BOOL)isBlastDoorAttachmentPreviewEnabled;
-(BOOL)isCKScreenshotTestFeatureFlagMember:(id)arg0 withDomain:(id)arg1 ;
-(BOOL)isGreenfieldBlastDoorEnabled;
-(BOOL)isGreenfieldEnabled;
-(BOOL)isImagePreviewBlastDoorEnabled;
-(BOOL)isInterstellarEnabled;
-(BOOL)isPassKitBlastDoorEnabled;
-(BOOL)isUnknownGroupSendersEnabled;
-(BOOL)loadAllChatsProgressivelyEnabled;
-(BOOL)manuallyAckMessagesEnabled;
-(BOOL)messageAppFreezerEnabled;
-(BOOL)messagesBlastdoorEnabled;
-(BOOL)modernAppPresentationEnabled;
-(BOOL)photoAnalysisInSpotlightEnabled;
-(BOOL)psEnabled;


@end


#endif