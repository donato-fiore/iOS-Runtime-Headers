// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMMEMBERSHARERELATIONSHIP_H
#define EDAMMEMBERSHARERELATIONSHIP_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMShareRelationshipRestrictions.h"

@interface EDAMMemberShareRelationship : FATObject

@property (retain, nonatomic) NSNumber *bestPrivilege; // ivar: _bestPrivilege
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *individualPrivilege; // ivar: _individualPrivilege
@property (retain, nonatomic) NSNumber *recipientUserId; // ivar: _recipientUserId
@property (retain, nonatomic) EDAMShareRelationshipRestrictions *restrictions; // ivar: _restrictions
@property (retain, nonatomic) NSNumber *sharerUserId; // ivar: _sharerUserId


+(id)structFields;
+(id)structName;


@end


#endif