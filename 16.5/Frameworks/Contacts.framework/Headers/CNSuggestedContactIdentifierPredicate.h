// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSUGGESTEDCONTACTIDENTIFIERPREDICATE_H
#define CNSUGGESTEDCONTACTIDENTIFIERPREDICATE_H

@class NSString;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger suggestionIdentifier; // ivar: _suggestionIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsNativeSorting;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestionIdentifier:(NSUInteger)arg0 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif