// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMINVITATIONSHARERELATIONSHIP_H
#define EDAMINVITATIONSHARERELATIONSHIP_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMUserIdentity.h"

@interface EDAMInvitationShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) EDAMUserIdentity *recipientUserIdentity; // ivar: _recipientUserIdentity
@property (retain, nonatomic) NSNumber *sharerUserId; // ivar: _sharerUserId


+(id)structFields;
+(id)structName;


@end


#endif