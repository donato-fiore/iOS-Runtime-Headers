// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSFAMILYINFOLOOKUPRESULT_H
#define AMSFAMILYINFOLOOKUPRESULT_H

@class NSDictionary, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface AMSFamilyInfoLookupResult : NSObject

@property (readonly, nonatomic, getter=isCached) BOOL cached; // ivar: _cached
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly, nonatomic) NSNumber *headOfHouseholdICloudDSID; // ivar: _headOfHouseholdICloudDSID
@property (readonly, nonatomic, getter=isHeadOfHouseholdSharingPayment) BOOL headOfHouseholdSharingPayment; // ivar: _headOfHouseholdSharingPayment


+(id)_familyMembersFromDictionaryRepresentation:(id)arg0 ;
-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 cached:(BOOL)arg1 ;


@end


#endif