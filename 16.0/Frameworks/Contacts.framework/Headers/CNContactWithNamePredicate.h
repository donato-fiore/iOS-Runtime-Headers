// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTWITHNAMEPREDICATE_H
#define CNCONTACTWITHNAMEPREDICATE_H

@class NSString;
@protocol CNMAIDPredicate, CNSuggestedContactPredicate;


#import "CNPredicate.h"

@interface CNContactWithNamePredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)doesPerson:(id)arg0 matchName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)descriptionForOptions:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)contactsFromCLSDataStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif