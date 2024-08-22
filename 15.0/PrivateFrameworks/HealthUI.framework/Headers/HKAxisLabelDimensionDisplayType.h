// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKAXISLABELDIMENSIONDISPLAYTYPE_H
#define HKAXISLABELDIMENSIONDISPLAYTYPE_H



#import "HKAxisLabelDimensionScalar.h"
#import "HKDisplayType.h"
#import "HKUnitPreferenceController.h"
#import "HKDisplayTypeValueFormatter.h"

@interface HKAxisLabelDimensionDisplayType : HKAxisLabelDimensionScalar

@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (retain, nonatomic) HKDisplayTypeValueFormatter *valueFormatter; // ivar: _valueFormatter


-(id)initWithDisplayType:(id)arg0 unitPreferencesController:(id)arg1 ;
-(id)stringForLocation:(id)arg0 ;


@end


#endif