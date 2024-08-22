// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALIDWEIGHTPICKERDATAPROVIDER_H
#define HKMEDICALIDWEIGHTPICKERDATAPROVIDER_H


#import <Foundation/Foundation.h>


@interface HKMedicalIDWeightPickerDataProvider : NSObject



+(CGFloat)defaultKilogramValue;
+(CGFloat)getWeightInKilogramsForRow:(NSInteger)arg0 ;
+(NSInteger)numberOfRows;
+(NSInteger)rowForWeightInKilograms:(CGFloat)arg0 ;
+(id)titleForRow:(NSInteger)arg0 ;


@end


#endif