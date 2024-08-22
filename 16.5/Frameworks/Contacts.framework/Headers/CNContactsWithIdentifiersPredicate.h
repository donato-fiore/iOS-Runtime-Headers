// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSWITHIDENTIFIERSPREDICATE_H
#define CNCONTACTSWITHIDENTIFIERSPREDICATE_H

@class NSMutableDictionary, NSString, NSArray;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNSuggestedContactPredicate>

 {
    NSMutableDictionary *_internalIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)isEqual:(id)arg0 ;
-(id)contactsFromDonationStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)internalIdentifiersForStoreWithIdentifier:(id)arg0 ;
-(id)suggestionsWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif