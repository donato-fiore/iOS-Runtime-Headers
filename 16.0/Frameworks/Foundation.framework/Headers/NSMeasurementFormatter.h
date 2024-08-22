// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMEASUREMENTFORMATTER_H
#define NSMEASUREMENTFORMATTER_H

@class NSLocale;
@protocol NSSecureCoding;


#import "NSFormatter.h"
#import "NSNumberFormatter.h"

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding>

 {
    *void _formatter;
}


@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;
@property NSUInteger unitOptions;
@property NSInteger unitStyle;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)measurementFromString:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromMeasurement:(id)arg0 ;
-(id)stringFromUnit:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif