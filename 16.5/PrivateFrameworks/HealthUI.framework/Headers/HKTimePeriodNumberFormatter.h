// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTIMEPERIODNUMBERFORMATTER_H
#define HKTIMEPERIODNUMBERFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldRoundToHours; // ivar: _shouldRoundToHours
@property (nonatomic) BOOL shouldShowDays; // ivar: _shouldShowDays
@property (readonly) Class superclass;


-(BOOL)returnsUnitWithValueForDisplay;
-(id)init;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif