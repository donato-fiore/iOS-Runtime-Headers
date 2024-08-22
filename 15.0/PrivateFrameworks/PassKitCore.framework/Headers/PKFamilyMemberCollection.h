// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFAMILYMEMBERCOLLECTION_H
#define PKFAMILYMEMBERCOLLECTION_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "PKFamilyMember.h"

@interface PKFamilyMemberCollection : NSObject

@property (readonly, nonatomic) PKFamilyMember *currentUser; // ivar: _currentUser
@property (readonly, copy, nonatomic) NSString *currentUserAltDSID; // ivar: _currentUserAltDSID
@property (readonly, copy, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly, copy, nonatomic) NSDictionary *familyMembersByAltDSID; // ivar: _familyMembersByAltDSID


-(BOOL)isEqual:(id)arg0 ;
-(id)familyMemberForAltDSID:(id)arg0 ;
-(id)familyMemberForTransactionSource:(id)arg0 ;
-(id)initWithFamilyMembers:(id)arg0 ;


@end


#endif