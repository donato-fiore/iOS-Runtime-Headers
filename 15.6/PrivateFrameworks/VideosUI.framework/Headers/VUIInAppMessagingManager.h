// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIINAPPMESSAGINGMANAGER_H
#define VUIINAPPMESSAGINGMANAGER_H

@class NSMutableDictionary, IAMMessageCoordinator, NSString;
@protocol IAMMessageMetricsDelegate, AMSUIMessageGroupDelegate;

#import <Foundation/Foundation.h>

#import "VUIInAppMessagesConfig.h"
#import "VUIInAppMessagingContextProvider.h"

@interface VUIInAppMessagingManager : NSObject <IAMMessageMetricsDelegate, AMSUIMessageGroupDelegate>

 {
    NSMutableDictionary *messageRegistry;
}


@property (retain, nonatomic) VUIInAppMessagesConfig *config; // ivar: _config
@property (retain, nonatomic) VUIInAppMessagingContextProvider *context; // ivar: _context
@property (retain, nonatomic) IAMMessageCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *purchaseOrLinkingAdamID; // ivar: _purchaseOrLinkingAdamID
@property (retain, nonatomic) NSString *subscriptionChannelLink; // ivar: _subscriptionChannelLink
@property (retain, nonatomic) NSString *subscriptionChannelTitle; // ivar: _subscriptionChannelTitle
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_getMessageGroups;
-(id)_normalizedPageDetailsForEventProperties:(id)arg0 ;
-(id)init;
-(id)messageForTargetID:(id)arg0 ;
-(id)messageJSONForTargetID:(id)arg0 ;
-(void)_debouncedLibraryContentsDidChange;
-(void)_handleActiveDownloadButtonsDidChange:(id)arg0 ;
-(void)_handleHasFavoriteTeamsDidChange:(id)arg0 ;
-(void)_handleIsPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_handleLibraryContentsDidChange:(id)arg0 ;
-(void)_handleLocationStatusDidChange:(id)arg0 ;
-(void)_handleNetworkStatusDidChange:(id)arg0 ;
-(void)_handleSubscriptionDataDidChangeNotification:(id)arg0 ;
-(void)_postPurchaseOrLinkingProcessing;
-(void)_showPostPurchaseOrLinkingConfirmation;
-(void)addMessage:(id)arg0 forTargetID:(id)arg1 ;
-(void)dealloc;
-(void)messageDidReportMetricsEvent:(id)arg0 eventProperties:(id)arg1 ;
-(void)messageGroup:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)messageGroup:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)registerMessageTarget:(id)arg0 ;
-(void)removeMessageForTargetID:(id)arg0 ;
-(void)reportApplicationDidBecomeActiveEvent;
-(void)reportCountableEventNamed:(id)arg0 ;
-(void)reportDocumentAppearance:(id)arg0 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg0 fromTargetWithIdentifier:(id)arg1 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg0 fromTargetWithIdentifier:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg0 actionWasPerformedWithIdentifier:(id)arg1 ;
-(void)reportMetricsEvent:(id)arg0 ;
-(void)reportValueEventNamed:(id)arg0 value:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg0 ;


@end


#endif