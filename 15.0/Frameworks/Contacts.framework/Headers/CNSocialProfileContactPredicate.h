// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSOCIALPROFILECONTACTPREDICATE_H
#define CNSOCIALPROFILECONTACTPREDICATE_H

@class NSString;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"
#import "CNSocialProfile.h"

@interface CNSocialProfileContactPredicate : CNPredicate <CNSuggestedContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CNSocialProfile *socialProfile; // ivar: _socialProfile
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSocialProfile:(id)arg0 ;
-(id)sgContactMatchesWithSortOrder:(NSInteger)arg0 mutableObjects:(BOOL)arg1 service:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif