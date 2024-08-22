// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKTIEREDDECIMALPRECISIONNUMBERFORMATTER_H
#define _HKTIEREDDECIMALPRECISIONNUMBERFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface _HKTieredDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)returnsUnitWithValueForDisplay;
-(NSUInteger)style;
-(id)_numberFormatterForNumber:(id)arg0 displayType:(id)arg1 ;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif