// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSCODEREMOVEREQUESTVALUE_H
#define HMACCESSCODEREMOVEREQUESTVALUE_H

@class NSUUID, NSArray, NSString;
@protocol HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryAccessCodeValue.h"

@interface HMAccessCodeRemoveRequestValue : NSObject <HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>



@property (readonly, copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue; // ivar: _accessoryAccessCodeValue
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *guestName; // ivar: _guestName
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryAccessCodeValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif