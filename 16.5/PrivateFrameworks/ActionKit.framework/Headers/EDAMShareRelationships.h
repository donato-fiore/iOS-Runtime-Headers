// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSHARERELATIONSHIPS_H
#define EDAMSHARERELATIONSHIPS_H

@class NSArray;


#import "FATObject.h"
#import "EDAMShareRelationshipRestrictions.h"

@interface EDAMShareRelationships : FATObject

@property (retain, nonatomic) EDAMShareRelationshipRestrictions *invitationRestrictions; // ivar: _invitationRestrictions
@property (retain, nonatomic) NSArray *invitations; // ivar: _invitations
@property (retain, nonatomic) NSArray *memberships; // ivar: _memberships


+(id)structFields;
+(id)structName;


@end


#endif