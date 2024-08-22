// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYPILLVALUEPROVIDER_H
#define HKOVERLAYPILLVALUEPROVIDER_H

@protocol HKOverlayPillValueProviding;

#import <Foundation/Foundation.h>


@interface HKOverlayPillValueProvider : NSObject <HKOverlayPillValueProviding>





-(id)_formattedQuantity:(id)arg0 displayType:(id)arg1 ;
-(id)_formattedQuantityRange:(id)arg0 displayType:(id)arg1 ;
-(id)_quantityRangeFromChartPoints:(id)arg0 unit:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 ;
-(id)_unitFromQuantityRange:(id)arg0 displayType:(id)arg1 ;
-(id)_valueFromQuantityRange:(id)arg0 displayType:(id)arg1 ;
-(id)valueFromChartPoints:(id)arg0 unit:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 ;


@end


#endif