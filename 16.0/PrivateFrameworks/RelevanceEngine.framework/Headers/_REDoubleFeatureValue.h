// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REDOUBLEFEATUREVALUE_H
#define _REDOUBLEFEATUREVALUE_H



#import "REFeatureValue.h"

@interface _REDoubleFeatureValue : REFeatureValue {
    CGFloat _value;
}




+(id)featureValueWithDouble:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSUInteger)_integralFeatureValue;
-(NSUInteger)hash;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValue:(CGFloat)arg0 ;


@end


#endif