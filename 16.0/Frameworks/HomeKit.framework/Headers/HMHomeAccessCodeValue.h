// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMHOMEACCESSCODEVALUE_H
#define HMHOMEACCESSCODEVALUE_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessCodeUserInformationValue.h"

@interface HMHomeAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) HMAccessCodeUserInformationValue *userInformationValue; // ivar: _userInformationValue


+(BOOL)supportsSecureCoding;
+(id)homeAccessCodeValueWithStringValue:(id)arg0 label:(id)arg1 ;
+(id)homeAccessCodeValueWithStringValue:(id)arg0 removedUserInfo:(id)arg1 ;
+(id)homeAccessCodeValueWithStringValue:(id)arg0 userUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessCodeValue:(id)arg0 userInformationValue:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif