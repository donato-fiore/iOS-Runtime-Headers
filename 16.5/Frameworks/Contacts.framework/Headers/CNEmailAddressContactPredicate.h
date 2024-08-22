// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNEMAILADDRESSCONTACTPREDICATE_H
#define CNEMAILADDRESSCONTACTPREDICATE_H

@class NSString, NSArray;
@protocol CNMAIDPredicate, CNSuggestedContactPredicate;


#import "CNPredicate.h"

@interface CNEmailAddressContactPredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // ivar: _groupIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL returnsMultipleResults; // ivar: _returnsMultipleResults
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)contactsFromCLSDataStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 groupIdentifiers:(id)arg1 returnMultipleResults:(BOOL)arg2 ;
-(id)initWithEmailAddress:(id)arg0 returnMultipleResults:(BOOL)arg1 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(id)shortDebugDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif