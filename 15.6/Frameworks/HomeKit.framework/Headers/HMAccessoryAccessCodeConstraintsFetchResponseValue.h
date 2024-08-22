// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYACCESSCODECONSTRAINTSFETCHRESPONSEVALUE_H
#define HMACCESSORYACCESSCODECONSTRAINTSFETCHRESPONSEVALUE_H

@class NSUUID, NSArray, NSString, NSError;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessCodeConstraints.h"

@interface HMAccessoryAccessCodeConstraintsFetchResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) HMAccessCodeConstraints *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 constraints:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif