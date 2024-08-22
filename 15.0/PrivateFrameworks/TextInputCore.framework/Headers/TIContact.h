// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICONTACT_H
#define TICONTACT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TIContact : NSObject

@property (retain, nonatomic) NSArray *cities; // ivar: _cities
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (nonatomic) BOOL hasRelevancyScore; // ivar: _hasRelevancyScore
@property (retain, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (retain, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (retain, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (retain, nonatomic) NSArray *relations; // ivar: _relations
@property (nonatomic) float relevancyScore; // ivar: _relevancyScore


-(id)flatten;


@end


#endif