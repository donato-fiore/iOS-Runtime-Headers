// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSCONTACTSMANAGER_H
#define CKDETAILSCONTACTSMANAGER_H

@class NSArray, NSDictionary, NSString;
@protocol CKDetailsContactsManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKConversation.h"

@interface CKDetailsContactsManager : NSObject

@property (readonly, copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSArray *contactsViewModels; // ivar: _contactsViewModels
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<CKDetailsContactsManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *facetimeAudioIDStatuses; // ivar: _facetimeAudioIDStatuses
@property (retain, nonatomic) NSDictionary *facetimeIDStatuses; // ivar: _facetimeIDStatuses
@property (retain, nonatomic) NSDictionary *screenSharingIDSStatuses; // ivar: _screenSharingIDSStatuses
@property (retain, nonatomic) NSString *serviceAvailabilityKey; // ivar: _serviceAvailabilityKey


-(BOOL)__im_ff_isExpanseEnabled;
-(BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg0 ;
-(BOOL)_isHandleActiveParticipantInTUConversation:(id)arg0 ;
-(BOOL)_preferredRoutesDisabledViaServerBag;
-(BOOL)_showFaceTimeVideoButtonForEntity:(id)arg0 ;
-(BOOL)_showMessageButtonForEntity:(id)arg0 ;
-(BOOL)_showPhoneButtonForEntity:(id)arg0 ;
-(BOOL)hasPreferredCallServiceForEntity:(id)arg0 ;
-(BOOL)isFaceTimeAudioAvailableForEntity:(id)arg0 ;
-(BOOL)isFaceTimeVideoAvailableForEntity:(id)arg0 ;
-(BOOL)isTelephonyCallAvailableForEntity:(id)arg0 ;
-(BOOL)shouldAlwaysShowCallMenuForEntity:(id)arg0 ;
-(BOOL)showScreenSharingButtonForEntity:(id)arg0 ;
-(NSInteger)_facetimeAudioIDStatusForEntity:(id)arg0 ;
-(NSInteger)_facetimeIDStatusForEntity:(id)arg0 ;
-(NSInteger)_screenSharingStatusForEntity:(id)arg0 ;
-(NSUInteger)preferredCallServiceForID:(id)arg0 ;
-(id)_preferredCallServiceToIDMap;
-(id)callActionsForEntity:(id)arg0 ;
-(id)callMenuForEntity:(id)arg0 ;
-(id)contextMenuForEntity:(id)arg0 atom:(id)arg1 ;
-(id)contextMenuForUnknownRecipient:(id)arg0 atom:(id)arg1 ;
-(id)conversationContextMenuConfigForEntity:(id)arg0 allowConversationRemoval:(BOOL)arg1 ;
-(id)conversationContextMenuForEntity:(id)arg0 allowConversationRemoval:(BOOL)arg1 ;
-(id)conversationContextMenuForUnknownEntity:(id)arg0 allowConversationRemoval:(BOOL)arg1 showUnknownContactActionInPopover:(BOOL)arg2 unknownContactActionHandler:(id)arg3 ;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 ;
-(void)_callButtonPressedWithVideoEnabled:(BOOL)arg0 ;
-(void)_conversationJoinStateDidChange:(id)arg0 ;
-(void)_handleAddressBookChange:(id)arg0 ;
-(void)_handleConversationPendingRecipientsDidChange:(id)arg0 ;
-(void)_handleConversationRecipientsDidChange:(id)arg0 ;
-(void)_handleLocationChanged:(id)arg0 ;
-(void)_handleMultiwayStateChanged:(id)arg0 ;
-(void)_inviteEntityToShareTheirScreen:(id)arg0 ;
-(void)_performUpdateViewModels;
-(void)_refreshIDSStatusWithCompletion:(id)arg0 ;
-(void)_setPreferredCallServiceToIDMap:(id)arg0 ;
-(void)_shareMyScreenWithEntity:(id)arg0 ;
-(void)_startCallWithEntity:(id)arg0 phoneAddress:(id)arg1 ;
-(void)_startCommunicationForEntity:(id)arg0 usePreferredRouteIfAvailable:(BOOL)arg1 ;
-(void)_startFacetimeCommunicationForEntity:(id)arg0 audioOnly:(BOOL)arg1 ;
-(void)_startMessageWithEntity:(id)arg0 ;
-(void)_updateViewModelsWithDelay:(BOOL)arg0 ;
-(void)beginFacetimeCallWithVideo:(BOOL)arg0 ;
-(void)callableAddressesForEntity:(id)arg0 withResult:(id)arg1 ;
-(void)dealloc;
-(void)sendEmail;
-(void)setPreferredCallService:(NSUInteger)arg0 forID:(id)arg1 ;
-(void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg0 ;
-(void)startCommunicationForEntity:(id)arg0 action:(NSUInteger)arg1 address:(id)arg2 ;
-(void)startCommunicationForEntity:(id)arg0 action:(NSUInteger)arg1 address:(id)arg2 usePreferredRouteIfAvailable:(BOOL)arg3 ;
-(void)startCommunicationForViewModel:(id)arg0 action:(NSUInteger)arg1 address:(id)arg2 ;


@end


#endif