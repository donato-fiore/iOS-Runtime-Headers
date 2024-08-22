// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKELECTROCARDIOGRAMVOLTAGEMEASUREMENT_H
#define HKELECTROCARDIOGRAMVOLTAGEMEASUREMENT_H


#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKElectrocardiogramVoltageMeasurement : NSObject {
    HKQuantity *_leadIVoltage;
}


@property (readonly, nonatomic) CGFloat timeSinceSampleStart; // ivar: _timeSinceSampleStart


-(id)initWithLeadIVoltage:(id)arg0 timeSinceSampleStart:(CGFloat)arg1 ;
-(id)quantityForLead:(NSInteger)arg0 ;


@end


#endif