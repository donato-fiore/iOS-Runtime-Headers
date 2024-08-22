// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCAMERASMARTSHARINGIDENTITY_H
#define PHCAMERASMARTSHARINGIDENTITY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHCameraSmartSharingIdentity : NSObject <NSSecureCoding>



@property (readonly) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 emailAddress:(id)arg1 contactIdentifiers:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif