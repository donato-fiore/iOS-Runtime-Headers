// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTADDITIONALPUSHTOPICS_H
#define PKACCOUNTADDITIONALPUSHTOPICS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *account; // ivar: _account
@property (copy, nonatomic) NSString *applications; // ivar: _applications
@property (copy, nonatomic) NSString *extendedAccount; // ivar: _extendedAccount
@property (copy, nonatomic) NSString *financingPlans; // ivar: _financingPlans
@property (copy, nonatomic) NSString *fundingSources; // ivar: _fundingSources
@property (copy, nonatomic) NSString *payments; // ivar: _payments
@property (copy, nonatomic) NSString *physicalCards; // ivar: _physicalCards
@property (copy, nonatomic) NSString *servicingToken; // ivar: _servicingToken
@property (copy, nonatomic) NSString *sharedAccountCloudStore; // ivar: _sharedAccountCloudStore
@property (copy, nonatomic) NSString *users; // ivar: _users
@property (copy, nonatomic) NSString *virtualCards; // ivar: _virtualCards


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif