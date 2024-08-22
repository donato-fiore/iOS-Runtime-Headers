// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RESTRINGFEATUREVALUE_H
#define _RESTRINGFEATUREVALUE_H

@class NSString;


#import "REFeatureValue.h"

@interface _REStringFeatureValue : REFeatureValue {
    NSString *_value;
}




+(id)featureValueWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_integralFeatureValue;
-(NSUInteger)hash;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)stringValue;


@end


#endif