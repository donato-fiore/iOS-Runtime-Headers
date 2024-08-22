// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONLOWFLOWESTIMATIONCONFIG_H
#define FCPERSONALIZATIONLOWFLOWESTIMATIONCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationLowFlowEstimationConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat exponent; // ivar: _exponent
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (nonatomic) CGFloat prior; // ivar: _prior


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithExponent:(CGFloat)arg0 padding:(CGFloat)arg1 prior:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif