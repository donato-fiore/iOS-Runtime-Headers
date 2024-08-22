// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHARESHEETSLOTMANAGER_H
#define SFSHARESHEETSLOTMANAGER_H

@class NSXPCConnection, NSString;
@protocol SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate, SFShareSheetSlotManagerDelegate;

#import <Foundation/Foundation.h>


@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFShareSheetSlotManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(id)remoteObjectProxy;
-(void)activate;
-(void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg0 ;
-(void)activityViewControllerPerformEditActionsWithSessionID:(id)arg0 ;
-(void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg0 ;
-(void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg0 ;
-(void)activityViewControllerWithSessionID:(id)arg0 didLongPressShareActivityWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 favoritedActivity:(BOOL)arg1 withIdentifier:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)activityViewControllerWithSessionID:(id)arg0 provideFeedbackForPeopleSuggestionWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 removedPersonWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedActionWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedActivityWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedDefaultActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedPersonWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 toggledActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg0 updatedFavoritesProxies:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)connectToDaemonWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)connectToDaemonWithSessionID:(id)arg0 discoveryContext:(id)arg1 assetIdentifiers:(id)arg2 urlsBeingShared:(id)arg3 shouldSuggestFamilyMembers:(id)arg4 completionHandler:(id)arg5 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg0 ;
-(void)ensureConnectionEstablished;
-(void)ensureXPCStarted;
-(void)interrupted;
-(void)invalidate;
-(void)invalidated;
-(void)performActivityInHostWithUUID:(id)arg0 ;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg0 ;
-(void)performExtensionActivityInHostWithBundleID:(id)arg0 request:(id)arg1 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg0 singleUseToken:(id)arg1 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg0 suggestionProxies:(id)arg1 orderedUUIDs:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)sendConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)setProgress:(id)arg0 withTopText:(id)arg1 bottomText:(id)arg2 forNodeWithIdentifier:(id)arg3 shouldPulse:(id)arg4 animated:(BOOL)arg5 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif