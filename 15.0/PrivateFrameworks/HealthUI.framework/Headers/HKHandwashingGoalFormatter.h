// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHANDWASHINGGOALFORMATTER_H
#define HKHANDWASHINGGOALFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"
#import "HKUnitPreferenceController.h"

@interface HKHandwashingGoalFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(BOOL)returnsUnitWithValueForDisplay;
-(id)initWithDisplayType:(id)arg0 unitPreferenceController:(id)arg1 ;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif