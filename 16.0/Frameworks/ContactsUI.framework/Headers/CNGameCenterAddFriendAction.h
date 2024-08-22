// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGAMECENTERADDFRIENDACTION_H
#define CNGAMECENTERADDFRIENDACTION_H



#import "CNContactAction.h"

@interface CNGameCenterAddFriendAction : CNContactAction



-(id)actionTitleForContact:(id)arg0 ;
-(id)addFriendsMenuProvider:(SEL)arg0 ;
-(id)contactPerHandleForContact:(id)arg0 ;
-(id)title;
-(void)addContactAsFriend:(id)arg0 ;
-(void)createInviteFriendViewControllerForContact:(id)arg0 completionHandler:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif