// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUPRIVACYRULE_H
#define TUPRIVACYRULE_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "TUPhoneNumber.h"

@interface TUPrivacyRule : NSObject <NSCoding>



@property (readonly, nonatomic) NSString *businessID; // ivar: _businessID
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) TUPhoneNumber *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) int type; // ivar: _type


+(id)ruleForBusinessID:(id)arg0 ;
+(id)ruleForEmail:(id)arg0 ;
+(id)ruleForPhoneNumber:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initForBusinessID:(id)arg0 ;
-(id)initForEmail:(id)arg0 ;
-(id)initForPhoneNumber:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif