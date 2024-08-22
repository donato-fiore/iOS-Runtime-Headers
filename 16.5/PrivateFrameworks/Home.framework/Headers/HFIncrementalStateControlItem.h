// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFINCREMENTALSTATECONTROLITEM_H
#define HFINCREMENTALSTATECONTROLITEM_H

@class NSString, HFControlItem<HFPrimaryStateWriter>, NSNumber;
@protocol HFToggleableControlItem;


#import "HFControlItem.h"

@interface HFIncrementalStateControlItem : HFControlItem <HFToggleableControlItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // ivar: _incrementalCharacteristicType
@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem; // ivar: _primaryStateControlItem
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly) Class superclass;


+(Class)valueClass;
+(id)na_identity;
+(id)optionsForPrimaryStateControlItem:(id)arg0 incrementalCharacteristicType:(id)arg1 ;
+(id)readOnlyCharacteristicTypes;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 incrementalAndPrimaryCharacteristicType:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 primaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)togglePrimaryAndIncrementalState;
-(id)toggleValue;
-(id)updateWithOptions:(id)arg0 ;
-(id)valueForCharacteristicType:(id)arg0 inBatchReadResponse:(id)arg1 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif