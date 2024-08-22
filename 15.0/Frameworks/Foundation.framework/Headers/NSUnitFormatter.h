// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITFORMATTER_H
#define NSUNITFORMATTER_H

@class NSLocale;
@protocol NSSecureCoding;


#import "NSFormatter.h"
#import "NSNumberFormatter.h"

@interface NSUnitFormatter : NSFormatter <NSSecureCoding>

 {
    NSNumberFormatter *_numberFormatter;
    NSUInteger _unitOptions;
    NSInteger _unitStyle;
    *UAMeasureFormat _formatter;
    *UPluralRules _prules;
    BOOL _modified;
    NSLocale *_locale;
}


@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;
@property NSUInteger unitOptions;
@property NSInteger unitStyle;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForValue1:(CGFloat)arg0 unit1:(NSUInteger)arg1 value2:(CGFloat)arg2 unit2:(NSUInteger)arg3 ;
-(id)stringForValue:(CGFloat)arg0 unit:(NSUInteger)arg1 ;
-(id)stringFromUnit:(id)arg0 ;
-(id)unitStringFromValue:(CGFloat)arg0 unit:(NSUInteger)arg1 ;
-(int)_determineUnitsToFormat:(*int)arg0 fromMeasurement:(id)arg1 ;
-(void)checkIfModified;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif