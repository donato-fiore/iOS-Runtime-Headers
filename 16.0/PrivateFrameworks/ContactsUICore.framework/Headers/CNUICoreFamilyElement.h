// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREFAMILYELEMENT_H
#define CNUICOREFAMILYELEMENT_H

@class FAFamilyMember, NSArray;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyElement : NSObject

@property (readonly, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) BOOL hasMatchingContacts;
@property (readonly, nonatomic) BOOL isParent;
@property (readonly, nonatomic) NSArray *matchingContacts; // ivar: _matchingContacts


-(BOOL)containsFamilyMember:(id)arg0 ;
-(id)description;
-(id)initWithFamilyMember:(id)arg0 matchingContacts:(id)arg1 ;


@end


#endif