// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUSERACTIVITYHANDLER_H
#define CKUSERACTIVITYHANDLER_H


#import <Foundation/Foundation.h>


@interface CKUserActivityHandler : NSObject



+(BOOL)_messageUnknownFilteringEnabled;
+(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg0 ;
+(BOOL)isPreferencesURL:(id)arg0 ;
+(BOOL)restoreState:(id)arg0 navigationProvider:(id)arg1 ;
+(BOOL)restoreStateFromUserActivity:(id)arg0 withNavigationProvider:(id)arg1 ;
+(id)conversationfromLaunchEventContext:(id)arg0 ;
+(id)createPluginPayloadForCloudKit:(id)arg0 ;
+(id)createPluginPayloadForCloudKitPlusCollaborationMetadata:(id)arg0 shareOptions:(id)arg1 ;
+(id)createPluginPayloadForCloudKitWithLaunchContext:(id)arg0 ;
+(id)createPluginPayloadForFileProvider:(id)arg0 sendCopyFileURLs:(id)arg1 ;
+(id)createPluginPayloadForPendingCollaboration:(id)arg0 ;
+(id)finalCompositionFromExistingComposition:(id)arg0 pluginPayloadComposition:(id)arg1 shareOptions:(id)arg2 ;
+(id)validIntentDictionaryWithURLParameters:(id)arg0 ;
+(void)_sendCollaborationInitationForURL:(id)arg0 originatingProcess:(id)arg1 chat:(id)arg2 conversation:(id)arg3 recipientIDs:(id)arg4 navigationProvider:(id)arg5 animate:(BOOL)arg6 ;
+(void)_setMessageFilterModeBy:(id)arg0 navigationProvider:(id)arg1 ;
+(void)_showPeerPaymentUIForPerson:(id)arg0 amount:(id)arg1 navigationProvider:(id)arg2 chatController:(id)arg3 ;
+(void)chatScene:(id)arg0 openURLContexts:(id)arg1 ;
+(void)chatScene:(id)arg0 willConnectToSession:(id)arg1 userActivities:(id)arg2 urlContexts:(id)arg3 windowSceneDelegate:(id)arg4 ;
+(void)compositionFromDictionary:(id)arg0 completion:(id)arg1 ;
+(void)fileProviderCompositionFromPluginPayload:(id)arg0 url:(id)arg1 shareOptions:(id)arg2 previousComposition:(id)arg3 completion:(id)arg4 ;
+(void)loadCompositionWithAttachments:(id)arg0 launchEventContext:(id)arg1 animate:(BOOL)arg2 navigationProvider:(id)arg3 chatController:(id)arg4 ;
+(void)loadConversationWithMessageGUID:(id)arg0 withInlineReplyOverlay:(BOOL)arg1 navigationProvider:(id)arg2 ;
+(void)loadNonGelatoCompositionForConversation:(id)arg0 launchEventContext:(id)arg1 animate:(BOOL)arg2 navigationProvider:(id)arg3 chatController:(id)arg4 ;
+(void)messagesScene:(id)arg0 continueUserActivity:(id)arg1 withNavigationProvider:(id)arg2 chatController:(id)arg3 completion:(id)arg4 ;
+(void)messagesScene:(id)arg0 willConnectToSession:(id)arg1 userActivities:(id)arg2 stateRestorationActivity:(id)arg3 windowSceneDelegate:(id)arg4 ;
+(void)openSMSURL:(id)arg0 animate:(BOOL)arg1 navigationProvider:(id)arg2 chatController:(id)arg3 originatingProcess:(id)arg4 ;
+(void)openSURFURL:(id)arg0 navigationProvider:(id)arg1 ;
+(void)openURL:(id)arg0 animate:(BOOL)arg1 sourceApplication:(id)arg2 originatingProcess:(id)arg3 navigationProvider:(id)arg4 chatController:(id)arg5 completion:(id)arg6 ;
+(void)processAppleEventDictionary:(id)arg0 animate:(BOOL)arg1 navigationProvider:(id)arg2 chatController:(id)arg3 ;
+(void)processLaunchEventContext:(id)arg0 animate:(BOOL)arg1 navigationProvider:(id)arg2 chatController:(id)arg3 ;
+(void)sendBackgroundCollaborationForUserActivity:(id)arg0 withNavigationProvider:(id)arg1 chatController:(id)arg2 completion:(id)arg3 ;
+(void)setChatControllerCompositionForConversation:(id)arg0 navigationProvider:(id)arg1 composition:(id)arg2 ;
+(void)setupCollaborationCompositionWithLaunchEventContext:(id)arg0 animate:(BOOL)arg1 navigationProvider:(id)arg2 chatController:(id)arg3 conversation:(id)arg4 replaceComposition:(BOOL)arg5 ;
+(void)setupFinalCompositionWithExistingComposition:(id)arg0 withPluginPayloadComposition:(id)arg1 shareOptions:(id)arg2 conversation:(id)arg3 animated:(BOOL)arg4 navigationProvider:(id)arg5 ;
+(void)showConversation:(id)arg0 animated:(BOOL)arg1 navigationProvider:(id)arg2 ;
+(void)updateChatController:(id)arg0 composition:(id)arg1 ;


@end


#endif