// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCONTACTINFO_H
#define SFCONTACTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFContactInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif