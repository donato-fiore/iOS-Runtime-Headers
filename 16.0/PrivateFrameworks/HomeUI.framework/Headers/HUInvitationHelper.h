// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUINVITATIONHELPER_H
#define HUINVITATIONHELPER_H

@class HFContactController, CNContactFormatter, NSString, NSArray, HMIncomingHomeInvitation, CNContact;
@protocol HFContactControllerDelegate, HUInvitationHelperDelegate;

#import <Foundation/Foundation.h>


@interface HUInvitationHelper : NSObject <HFContactControllerDelegate>



@property (retain, nonatomic) HFContactController *contactsController; // ivar: _contactsController
@property (retain, nonatomic) CNContactFormatter *contactsFormatter; // ivar: _contactsFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUInvitationHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeInvitationTitle;
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation; // ivar: _invitation
@property (retain, nonatomic) CNContact *inviterContact; // ivar: _inviterContact
@property (retain, nonatomic) NSString *inviterID; // ivar: _inviterID
@property (nonatomic) BOOL isUnknownContact; // ivar: _isUnknownContact
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;


+(id)_dateFormatter;
+(id)dateFormatter;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)requiredKeyDescriptors;
-(void)_updateInviterContactInfo;
-(void)contactController:(id)arg0 didFinishDownloadingFamilyMemberAvatar:(id)arg1 ;


@end


#endif