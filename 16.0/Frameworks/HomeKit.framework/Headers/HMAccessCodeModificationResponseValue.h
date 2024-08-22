// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSCODEMODIFICATIONRESPONSEVALUE_H
#define HMACCESSCODEMODIFICATIONRESPONSEVALUE_H

@class NSUUID, NSArray, NSString, NSError;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessoryAccessCodeValue.h"

@interface HMAccessCodeModificationResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue; // ivar: _accessoryAccessCodeValue
@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger operationType; // ivar: _operationType
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryAccessCodeValue:(id)arg1 accessCodeValue:(id)arg2 operationType:(NSInteger)arg3 error:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif