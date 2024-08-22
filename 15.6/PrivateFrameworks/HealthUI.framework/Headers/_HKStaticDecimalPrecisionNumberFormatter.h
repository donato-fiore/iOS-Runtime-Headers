// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSTATICDECIMALPRECISIONNUMBERFORMATTER_H
#define _HKSTATICDECIMALPRECISIONNUMBERFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger decimalPrecision; // ivar: _decimalPrecision
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)formatterWithDecimalPrecision:(NSInteger)arg0 ;
-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif