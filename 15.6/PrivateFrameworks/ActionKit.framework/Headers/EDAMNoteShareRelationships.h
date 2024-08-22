// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMNOTESHARERELATIONSHIPS_H
#define EDAMNOTESHARERELATIONSHIPS_H

@class NSArray;


#import "FATObject.h"
#import "EDAMNoteShareRelationshipRestrictions.h"

@interface EDAMNoteShareRelationships : FATObject

@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *invitationRestrictions; // ivar: _invitationRestrictions
@property (retain, nonatomic) NSArray *invitations; // ivar: _invitations
@property (retain, nonatomic) NSArray *memberships; // ivar: _memberships


+(id)structFields;
+(id)structName;


@end


#endif