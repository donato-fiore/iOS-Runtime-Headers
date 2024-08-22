// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSUGGESTIONMANAGER_H
#define NCSUGGESTIONMANAGER_H

@class NSString, NSMutableDictionary, NCNotificationRequest, NSMutableSet;
@protocol NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate, NCSuggestionManagerDelegate;

#import <Foundation/Foundation.h>


@interface NCSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCSuggestionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *remoteSuggestions; // ivar: _remoteSuggestions
@property (retain, nonatomic) NCNotificationRequest *requestWithProvisionalNotificationManagementSuggestion; // ivar: _requestWithProvisionalNotificationManagementSuggestion
@property (retain, nonatomic) NSMutableSet *requestsWithContactSuggestions; // ivar: _requestsWithContactSuggestions
@property (retain, nonatomic) NSMutableSet *requestsWithDirectMessagesManagementSuggestion; // ivar: _requestsWithDirectMessagesManagementSuggestion
@property (retain, nonatomic) NSMutableSet *requestsWithRemoteSuggestions; // ivar: _requestsWithRemoteSuggestions
@property (retain, nonatomic) NSMutableSet *requestsWithTimeSensitiveManagementSuggestion; // ivar: _requestsWithTimeSensitiveManagementSuggestion
@property (retain, nonatomic) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions; // ivar: _sectionIdentifiersWithNotificationManagementSuggestions
@property (retain, nonatomic) NSMutableDictionary *suggestionContentProviders; // ivar: _suggestionContentProviders
@property (readonly) Class superclass;


-(BOOL)_addSuggestionForNotificationRequest:(id)arg0 managementContentProvider:(id)arg1 ;
-(BOOL)_createContactMatchingSuggestionIfNeededForRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(BOOL)_createDirectMessagesSuggestionIfNeededForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(BOOL)_createProvisionalAuthorizationSuggestionIfNeededForRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(BOOL)_createRemoteSuggestionIfNeededForRequest:(id)arg0 remoteSuggestion:(id)arg1 ;
-(BOOL)_createTimeSensitiveSuggestionIfNeededForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withDigestSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withModeConfigurationTuningSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withMutingSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withRemoteSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withSendMessagesToDigestSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withTurnOffNotificationsForAppSuggestion:(id)arg1 ;
-(id)_contentProviderForRequest:(id)arg0 withUrgencyTuningSuggestion:(id)arg1 ;
-(id)_sectionSettingsForSectionIdentifier:(id)arg0 ;
-(id)auxiliaryOptionsContentProviderForNotificationRequest:(id)arg0 isLongLook:(BOOL)arg1 ;
-(id)init;
-(void)_createNewCuratedContactMatchSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 contactName:(id)arg2 ;
-(void)_createNewDirectMessagesInDigestSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(void)_createNewPromotingSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(void)_createNewTimeSensitiveInDigestSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(void)_createNewTimeSensitiveSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(void)_reloadSuggestionForNotificationRequest:(id)arg0 sectionSettings:(id)arg1 ;
-(void)_removeSuggestionIfNecessaryForNotificationRequest:(id)arg0 ;
-(void)_updateContentForNotificationRequest:(id)arg0 ;
-(void)checkSuggestionNeededForNotificationRequest:(id)arg0 ;
-(void)clearSuggestionForNotificationRequest:(id)arg0 ;
-(void)logResponseForNotificationRequest:(id)arg0 allowsNotifications:(BOOL)arg1 ;
-(void)logResponseForNotificationRequest:(id)arg0 allowsTimeSensitive:(BOOL)arg1 ;
-(void)logResponseForNotificationRequest:(id)arg0 deliveryQuietly:(BOOL)arg1 ;
-(void)logResponseForNotificationRequest:(id)arg0 muted:(BOOL)arg1 ;
-(void)logResponseForNotificationRequest:(id)arg0 scheduledDelivery:(BOOL)arg1 ;
-(void)notificationManagementContentProvider:(id)arg0 hasUpdatedContentForRequest:(id)arg1 ;
-(void)notificationManagementContentProvider:(id)arg0 keepNotificationsForSectionIdentifierForNotificationRequest:(id)arg1 ;
-(void)notificationManagementContentProvider:(id)arg0 requestsPresentingNotificationManagementViewType:(NSUInteger)arg1 forNotificationRequest:(id)arg2 withPresentingView:(id)arg3 ;
-(void)notificationManagementContentProvider:(id)arg0 requestsRemoveSuggestionForRequest:(id)arg1 ;
-(void)notificationManagementContentProvider:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationManagementContentProvider:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationManagementContentProvider:(id)arg0 setCuratedContactSuggestionConfirmed:(BOOL)arg1 request:(id)arg2 ;
-(void)notificationManagementContentProvider:(id)arg0 setModeConfiguration:(id)arg1 ;
-(void)notificationManagementContentProvider:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)notificationManagementContentProvider:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)reloadContactSuggestions;
-(void)reloadRemoteSuggestions;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif