// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, nonatomic) BOOL canAddMembers; // ivar: _canAddMembers
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties; // ivar: _cloudKitProperties
@property (readonly) FAEligibilityRequirements *eligibilityRequirements; // ivar: _eligibilityRequirements
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel; // ivar: _familyMembersFooterLabel
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites; // ivar: _invites
@property (readonly, nonatomic) FAFamilyMember *me; // ivar: _me
@property (readonly) NSArray *members; // ivar: _members
@property (readonly, copy, nonatomic) NSArray *pendingMembers; // ivar: _pendingMembers
@property (readonly, nonatomic) BOOL showAddMemberButton; // ivar: _showAddMemberButton


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponse:(id)arg0 ;
-(id)memberForAltDSID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif