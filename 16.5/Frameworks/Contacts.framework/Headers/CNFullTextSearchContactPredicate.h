// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFULLTEXTSEARCHCONTACTPREDICATE_H
#define CNFULLTEXTSEARCHCONTACTPREDICATE_H

@class NSArray, NSString;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate>



@property (readonly, copy, nonatomic) NSArray *containerIdentifiers; // ivar: _containerIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // ivar: _groupIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 containerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif