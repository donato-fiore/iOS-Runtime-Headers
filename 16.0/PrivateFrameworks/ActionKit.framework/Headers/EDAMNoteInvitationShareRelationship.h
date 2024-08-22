// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTEINVITATIONSHARERELATIONSHIP_H
#define EDAMNOTEINVITATIONSHARERELATIONSHIP_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMNoteInvitationShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *recipientIdentityId; // ivar: _recipientIdentityId
@property (retain, nonatomic) NSNumber *sharerUserId; // ivar: _sharerUserId


+(id)structFields;
+(id)structName;


@end


#endif