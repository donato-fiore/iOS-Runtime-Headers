// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHONENUMBERCONTACTPREDICATE_H
#define CNPHONENUMBERCONTACTPREDICATE_H

@class NSString, NSArray;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"
#import "CNPhoneNumber.h"

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate>

 {
    BOOL _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
    NSString *_prefixHint;
    NSString *_digits;
    NSString *_countryCode;
    NSArray *_groupIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(id)shortDebugDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif