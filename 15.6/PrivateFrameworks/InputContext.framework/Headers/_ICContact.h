// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICCONTACT_H
#define _ICCONTACT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _ICContact : NSObject

@property (readonly, nonatomic) NSArray *cities; // ivar: _cities
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, nonatomic) NSString *phoneticFirstName; // ivar: _phoneticFirstName
@property (readonly, nonatomic) NSString *phoneticLastName; // ivar: _phoneticLastName
@property (readonly, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (readonly, nonatomic) NSArray *relations; // ivar: _relations
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSArray *streets; // ivar: _streets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContact:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)flatten;
-(id)initWithFirstName:(id)arg0 phoneticFirstName:(id)arg1 middleName:(id)arg2 phoneticMiddleName:(id)arg3 lastName:(id)arg4 phoneticLastName:(id)arg5 organizationName:(id)arg6 jobTitle:(id)arg7 nickname:(id)arg8 relations:(id)arg9 streets:(id)arg10 cities:(id)arg11 score:(CGFloat)arg12 ;


@end


#endif