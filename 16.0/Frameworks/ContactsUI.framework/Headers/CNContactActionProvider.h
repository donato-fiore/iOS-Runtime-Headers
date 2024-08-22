// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTACTIONPROVIDER_H
#define CNCONTACTACTIONPROVIDER_H

@class CNUIUserActionListDataSource, CNMutableContact, CNContactStore, CNContainer;
@protocol CNPropertyActionDelegate;

#import <Foundation/Foundation.h>

#import "CNContactAddFavoriteAction.h"
#import "CNContactAddLinkedCardAction.h"
#import "CNContactAddToExistingContactAction.h"
#import "CNCapabilitiesManager.h"
#import "CNContactSelectContainersAction.h"
#import "CNContactCreateNewContactAction.h"
#import "CNContactAction.h"
#import "CNUIContactsEnvironment.h"
#import "CNPropertyFaceTimeAction.h"
#import "CNPropertyLinkedCardsAction.h"
#import "CNPropertyGroupsDataSource.h"
#import "CNPropertySendMessageAction.h"

@interface CNContactActionProvider : NSObject

@property (weak, nonatomic) NSObject<CNPropertyActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (readonly, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (readonly, nonatomic) CNContactAddFavoriteAction *addFavoriteAction; // ivar: _addFavoriteAction
@property (readonly, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction; // ivar: _addLinkedCardAction
@property (readonly, nonatomic) CNContactAddToExistingContactAction *addToExistingContactAction; // ivar: _addToExistingContactAction
@property (readonly, nonatomic) CNCapabilitiesManager *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNContainer *container; // ivar: _container
@property (readonly, nonatomic) CNContactSelectContainersAction *containerSelectionAction; // ivar: _containerSelectionAction
@property (readonly, nonatomic) CNContactCreateNewContactAction *createNewContactAction; // ivar: _createNewContactAction
@property (readonly, nonatomic) CNContactAction *createReminderAction; // ivar: _createReminderAction
@property (readonly, nonatomic) CNContactAction *disableGuardianRestrictionsAction; // ivar: _disableGuardianRestrictionsAction
@property (readonly, nonatomic) CNContactAction *enableGuardianRestrictionsAction; // ivar: _enableGuardianRestrictionsAction
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAction; // ivar: _faceTimeAction
@property (readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAudioAction; // ivar: _faceTimeAudioAction
@property (readonly, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction; // ivar: _linkedCardsAction
@property (readonly, nonatomic) CNPropertyGroupsDataSource *propertyGroupsDataSource; // ivar: _propertyGroupsDataSource
@property (readonly, nonatomic) CNPropertySendMessageAction *sendMessageAction; // ivar: _sendMessageAction
@property (readonly, nonatomic) CNContactAction *shareContactAction; // ivar: _shareContactAction
@property (readonly, nonatomic) CNContactAction *shareLocationAction; // ivar: _shareLocationAction
@property (readonly, nonatomic) CNContactAction *shareWithFamilyAction; // ivar: _shareWithFamilyAction
@property (readonly, nonatomic) CNContactAction *stopSharingLocationAction; // ivar: _stopSharingLocationAction
@property (readonly, nonatomic) CNContactAction *stopSharingWithFamilyAction; // ivar: _stopSharingWithFamilyAction


-(id)_addCreateNewContactAction;
-(id)_addFavoriteActionWithConferencing:(BOOL)arg0 telephony:(BOOL)arg1 ;
-(id)_sendMessageActionAllowingEmailIDs:(BOOL)arg0 ;
-(id)appropriateLocationSharingActionWhenSharing:(BOOL)arg0 ;
-(id)initWithContact:(id)arg0 inContainer:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithContact:(id)arg0 inContainer:(id)arg1 contactStore:(id)arg2 propertyGroupsDataSource:(id)arg3 actionsDataSource:(id)arg4 capabilities:(id)arg5 environment:(id)arg6 ;
-(void)buildAddContactActions;
-(void)buildCommunicationLimitsActions;
-(void)buildContainerSelectionAction;
-(void)buildLinkedContactActions;
-(void)buildSharingLocationActionsWithShareLocationController:(id)arg0 ;
-(void)buildStandardActions;


@end


#endif