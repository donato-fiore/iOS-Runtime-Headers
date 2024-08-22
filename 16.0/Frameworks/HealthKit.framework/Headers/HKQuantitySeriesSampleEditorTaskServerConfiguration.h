// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYSERIESSAMPLEEDITORTASKSERVERCONFIGURATION_H
#define HKQUANTITYSERIESSAMPLEEDITORTASKSERVERCONFIGURATION_H



#import "HKTaskConfiguration.h"
#import "HKQuantitySample.h"

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantitySample *quantitySample; // ivar: _quantitySample


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantitySample:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif