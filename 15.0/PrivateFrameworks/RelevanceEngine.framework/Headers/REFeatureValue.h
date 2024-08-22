// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REFEATUREVALUE_H
#define REFEATUREVALUE_H

@class NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REFeatureValue : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) NSUInteger int64Value;
@property (readonly, nonatomic) NSSet *setValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSUInteger type;


+(id)featureValueWithBool:(BOOL)arg0 ;
+(id)featureValueWithDictionary:(id)arg0 ;
+(id)featureValueWithDouble:(CGFloat)arg0 ;
+(id)featureValueWithInt64:(NSInteger)arg0 ;
+(id)featureValueWithSet:(id)arg0 ;
+(id)featureValueWithString:(id)arg0 ;
+(id)nullValueForFeature:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_integralFeatureValue;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;


@end


#endif