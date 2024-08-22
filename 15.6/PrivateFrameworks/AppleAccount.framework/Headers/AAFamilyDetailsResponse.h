// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAFAMILYDETAILSRESPONSE_H
#define AAFAMILYDETAILSRESPONSE_H

@class NSString, NSArray;


#import "AAResponse.h"
#import "AAFamilyMember.h"

@interface AAFamilyDetailsResponse : AAResponse

@property (readonly, nonatomic) NSString *addMemberInstructions; // ivar: _addMemberInstructions
@property (readonly, nonatomic) BOOL canAddChildMembers; // ivar: _canAddChildMembers
@property (readonly, nonatomic) BOOL canAddMembers; // ivar: _canAddMembers
@property (readonly, nonatomic) NSString *childAccountButtonTitle; // ivar: _childAccountButtonTitle
@property (readonly, nonatomic) NSString *childAccountPrompt; // ivar: _childAccountPrompt
@property (readonly, nonatomic) NSArray *firstNames;
@property (readonly, nonatomic) NSArray *invites; // ivar: _invites
@property (readonly, nonatomic) AAFamilyMember *me; // ivar: _me
@property (readonly, nonatomic) NSInteger memberCount;
@property (readonly, nonatomic) NSArray *members; // ivar: _members
@property (readonly, nonatomic) AAFamilyMember *organizer; // ivar: _organizer
@property (readonly, nonatomic) NSInteger pendingInviteCount;
@property (readonly, nonatomic) NSInteger pendingMemberCount;
@property (readonly, nonatomic) NSArray *pendingMembers; // ivar: _pendingMembers


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif