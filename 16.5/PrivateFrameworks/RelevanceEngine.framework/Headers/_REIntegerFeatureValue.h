// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REINTEGERFEATUREVALUE_H
#define _REINTEGERFEATUREVALUE_H



#import "REFeatureValue.h"

@interface _REIntegerFeatureValue : REFeatureValue {
    NSUInteger _value;
}




+(id)featureValueWithInt64:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_integralFeatureValue;
-(NSUInteger)hash;
-(NSUInteger)int64Value;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValue:(NSInteger)arg0 ;


@end


#endif