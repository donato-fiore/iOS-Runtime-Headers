// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECONTACTSPREDICATE_H
#define CNMECONTACTSPREDICATE_H



#import "CNPredicate.h"

@interface CNMeContactsPredicate : CNPredicate



+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactsFromDonationStore:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;


@end


#endif