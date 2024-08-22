// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYCIRCLE_H
#define FAFAMILYCIRCLE_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FAFamilyCloudKitProperties.h"
#import "FAEligibilityRequirements.h"
#import "FAFamilyMember.h"

@interface FAFamilyCircle : NSObject <NSSecureCoding>



@property (readonly) NSDictionary *_serverResponse; // ivar: __serverResponse
@property (readonly, copy, nonatomic) NSString *addMemberButtonLabel; // ivar: _addMemberButtonLabel
@property (readonly, copy, nonatomic) NSString *ageCategory; // ivar: _ageCategory
@property (readonly, nonatomic) NSArray *allowedSubscriptions; // ivar: _allowedSubscriptions
@property (readonly, nonatomic) BOOL canAddMembers; // ivar: _canAddMembers
@property (readonly, nonatomic) NSString *childCutOffAge; // ivar: _childCutOffAge
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties; // ivar: _cloudKitProperties
@property (readonly) FAEligibilityRequirements *eligibilityRequirements; // ivar: _eligibilityRequirements
@property (readonly, copy, nonatomic) NSString *familyID; // ivar: _familyID
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel; // ivar: _familyMembersFooterLabel
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites; // ivar: _invites
@property (readonly, nonatomic) FAFamilyMember *me; // ivar: _me
@property (readonly) NSArray *members; // ivar: _members
@property (readonly, copy, nonatomic) NSArray *pendingMembers; // ivar: _pendingMembers
@property (readonly, copy, nonatomic) NSArray *pendingMembersWithAllStatues; // ivar: _pendingMembersWithAllStatues
@property (readonly, nonatomic) BOOL shouldShowInvites; // ivar: _shouldShowInvites
@property (readonly, nonatomic) BOOL showAddMemberButton; // ivar: _showAddMemberButton
@property (readonly, nonatomic) BOOL showLocationSplashScreen; // ivar: _showLocationSplashScreen


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponse:(id)arg0 ;
-(id)memberForAltDSID:(id)arg0 ;
-(id)memberForDSID:(id)arg0 ;
-(id)memberForPhoneNumber:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif