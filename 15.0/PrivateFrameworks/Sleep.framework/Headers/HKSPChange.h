// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPCHANGE_H
#define HKSPCHANGE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, BSDescriptionProviding, NSObject><NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>

#import "HKSPProperty.h"

@interface HKSPChange : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>



@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *changedValue; // ivar: _changedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *originalValue; // ivar: _originalValue
@property (readonly, copy, nonatomic) HKSPProperty *property; // ivar: _property
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allowedValueClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 changedValue:(id)arg1 originalValue:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif