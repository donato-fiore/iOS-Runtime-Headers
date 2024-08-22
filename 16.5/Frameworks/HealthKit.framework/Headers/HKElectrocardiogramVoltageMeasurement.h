// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMVOLTAGEMEASUREMENT_H
#define HKELECTROCARDIOGRAMVOLTAGEMEASUREMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKElectrocardiogramVoltageMeasurement : NSObject <NSCopying>

 {
    HKQuantity *_leadIVoltage;
}


@property (readonly, nonatomic) CGFloat timeSinceSampleStart; // ivar: _timeSinceSampleStart


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLeadIVoltage:(id)arg0 timeSinceSampleStart:(CGFloat)arg1 ;
-(id)quantityForLead:(NSInteger)arg0 ;


@end


#endif