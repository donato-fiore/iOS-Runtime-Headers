// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPOWERSTATECONTROLITEM_H
#define HFPOWERSTATECONTROLITEM_H

@class NSSet, NSString;
@protocol HFPrimaryStateWriter;


#import "HFPrimaryStateControlItem.h"

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter>



@property (readonly) NSSet *allTargetValues; // ivar: _allTargetValues
@property (readonly, nonatomic) NSSet *auxiliaryTargetValueTuples; // ivar: _auxiliaryTargetValueTuples
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)valueClass;
+(id)_powerStateTargetValues;
+(id)na_identity;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 auxiliaryTargetValueTuples:(id)arg1 additionalCharacteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 auxiliaryTargetValueTuples:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicTypes:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)readValueAndPopulateStandardResults;
-(id)toggleValue;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writePrimaryState:(NSInteger)arg0 ;


@end


#endif