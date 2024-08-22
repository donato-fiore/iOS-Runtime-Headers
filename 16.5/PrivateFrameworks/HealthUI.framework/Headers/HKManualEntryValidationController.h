// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMANUALENTRYVALIDATIONCONTROLLER_H
#define HKMANUALENTRYVALIDATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface HKManualEntryValidationController : NSObject



-(NSUInteger)_validateQuantity:(id)arg0 withAbsoluteRange:(id)arg1 confirmRange:(id)arg2 ;
-(NSUInteger)validateMaximumAllowedDuration:(CGFloat)arg0 ofType:(id)arg1 ;
-(NSUInteger)validateMinimumAllowedDuration:(CGFloat)arg0 ofType:(id)arg1 ;
-(NSUInteger)validateQuantity:(id)arg0 ofType:(id)arg1 ;
-(NSUInteger)validateWorkoutDistance:(id)arg0 ;
-(NSUInteger)validateWorkoutEnergyBurned:(id)arg0 ;
-(id)supportedQuantityTypes;


@end


#endif