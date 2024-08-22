// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTEMEMBERSHARERELATIONSHIP_H
#define EDAMNOTEMEMBERSHARERELATIONSHIP_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMNoteShareRelationshipRestrictions.h"

@interface EDAMNoteMemberShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *recipientUserId; // ivar: _recipientUserId
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *restrictions; // ivar: _restrictions
@property (retain, nonatomic) NSNumber *sharerUserId; // ivar: _sharerUserId


+(id)structFields;
+(id)structName;


@end


#endif