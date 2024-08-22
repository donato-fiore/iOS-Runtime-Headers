// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSCODEUSERINFORMATIONVALUE_H
#define HMACCESSCODEUSERINFORMATIONVALUE_H

@class NSArray, NSString, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMRemovedUserInfo.h"

@interface HMAccessCodeUserInformationValue : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo; // ivar: _removedUserInfo
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *simpleLabel; // ivar: _simpleLabel
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSimpleLabel:(id)arg0 userUUID:(id)arg1 removedUserInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif