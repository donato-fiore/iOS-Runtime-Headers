// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCOLORCONTROLITEM_H
#define HFCOLORCONTROLITEM_H

@protocol HFColorProfile;


#import "HFControlItem.h"

@interface HFColorControlItem : HFControlItem

@property (readonly, nonatomic) NSObject<HFColorProfile> *colorProfile;
@property (nonatomic) BOOL naturalLightingEnabled;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (readonly, nonatomic) BOOL supportsRGBColor;


+(Class)valueClass;
+(id)colorCharacteristicTypes;
+(id)na_identity;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)valueForCharacteristicType:(id)arg0 inBatchReadResponse:(id)arg1 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writeValue:(id)arg0 ;
-(void)_logForNaturalLightUserStudy:(id)arg0 ;


@end


#endif