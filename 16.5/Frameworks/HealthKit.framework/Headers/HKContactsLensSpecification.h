// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONTACTSLENSSPECIFICATION_H
#define HKCONTACTSLENSSPECIFICATION_H

@protocol NSSecureCoding, NSCopying;


#import "HKLensSpecification.h"
#import "HKQuantity.h"

@interface HKContactsLensSpecification : HKLensSpecification <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKQuantity *baseCurve; // ivar: _baseCurve
@property (readonly, copy, nonatomic) HKQuantity *diameter; // ivar: _diameter


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSphere:(id)arg0 cylinder:(id)arg1 axis:(id)arg2 addPower:(id)arg3 baseCurve:(id)arg4 diameter:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif