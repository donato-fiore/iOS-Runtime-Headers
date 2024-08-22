// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNATURALSCALEDISTANCEMEASUREMENTFORMATTER_H
#define HKNATURALSCALEDISTANCEMEASUREMENTFORMATTER_H

@class NSString;
@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface HKNaturalScaleDistanceMeasurementFormatter : NSObject <HKNumberFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)returnsUnitWithValueForDisplay;
-(NSInteger)_precisionWithDisplayType:(id)arg0 unit:(id)arg1 andNumber:(CGFloat)arg2 ;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;
-(void)adjustedFormatInformationForUnit:(id)arg0 number:(id)arg1 displayType:(id)arg2 handler:(id)arg3 ;


@end


#endif