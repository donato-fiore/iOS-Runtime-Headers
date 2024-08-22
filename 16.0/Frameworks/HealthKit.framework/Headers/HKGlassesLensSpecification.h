// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGLASSESLENSSPECIFICATION_H
#define HKGLASSESLENSSPECIFICATION_H

@protocol NSSecureCoding, NSCopying;


#import "HKLensSpecification.h"
#import "HKQuantity.h"
#import "HKVisionPrism.h"

@interface HKGlassesLensSpecification : HKLensSpecification <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKQuantity *farPupillaryDistance; // ivar: _farPupillaryDistance
@property (readonly, copy, nonatomic) HKQuantity *nearPupillaryDistance; // ivar: _nearPupillaryDistance
@property (readonly, copy, nonatomic) HKVisionPrism *prism; // ivar: _prism
@property (readonly, copy, nonatomic) HKQuantity *vertexDistance; // ivar: _vertexDistance


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSphere:(id)arg0 cylinder:(id)arg1 axis:(id)arg2 addPower:(id)arg3 vertexDistance:(id)arg4 prism:(id)arg5 farPupillaryDistance:(id)arg6 nearPupillaryDistance:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif