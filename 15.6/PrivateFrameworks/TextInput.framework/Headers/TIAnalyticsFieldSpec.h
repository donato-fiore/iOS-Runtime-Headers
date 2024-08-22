// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIANALYTICSFIELDSPEC_H
#define TIANALYTICSFIELDSPEC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIAnalyticsFieldSpec : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)booleanFieldSpecWithName:(id)arg0 ;
+(id)floatFieldSpecWithName:(id)arg0 ;
+(id)floatFieldSpecWithName:(id)arg0 maxValue:(CGFloat)arg1 ;
+(id)floatFieldSpecWithName:(id)arg0 minValue:(CGFloat)arg1 ;
+(id)floatFieldSpecWithName:(id)arg0 minValue:(CGFloat)arg1 maxValue:(CGFloat)arg2 ;
+(id)floatFieldSpecWithName:(id)arg0 minValue:(id)arg1 maxValue:(id)arg2 significantDigits:(id)arg3 ;
+(id)integerFieldSpecWithName:(id)arg0 ;
+(id)integerFieldSpecWithName:(id)arg0 maxValue:(NSInteger)arg1 ;
+(id)integerFieldSpecWithName:(id)arg0 minValue:(NSInteger)arg1 ;
+(id)integerFieldSpecWithName:(id)arg0 minValue:(NSInteger)arg1 maxValue:(NSInteger)arg2 ;
+(id)integerFieldSpecWithName:(id)arg0 minValue:(id)arg1 maxValue:(id)arg2 significantDigits:(id)arg3 ;
+(id)stringFieldSpecWithName:(id)arg0 ;
+(id)stringFieldSpecWithName:(id)arg0 allowedValues:(id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)errorFromNil;
-(id)errorFromValue:(id)arg0 code:(NSInteger)arg1 message:(id)arg2 ;
-(id)initWithName:(id)arg0 ;


@end


#endif