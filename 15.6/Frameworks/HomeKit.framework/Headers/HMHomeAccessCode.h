// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMHOMEACCESSCODE_H
#define HMHOMEACCESSCODE_H

@class NSArray, NSString;
@protocol HMFObject;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessCodeUserInformation.h"

@interface HMHomeAccessCode : NSObject <HMFObject>



@property (readonly, copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) HMAccessCodeUserInformation *userInformation; // ivar: _userInformation


+(id)homeAccessCodeWithValue:(id)arg0 home:(id)arg1 ;
-(id)createHomeAccessCodeValue;
-(id)initWithAccessCodeValue:(id)arg0 userInformation:(id)arg1 ;


@end


#endif