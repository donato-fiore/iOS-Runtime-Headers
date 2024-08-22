// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPRIMARYSTATECONTROLITEM_H
#define HFPRIMARYSTATECONTROLITEM_H

@class NSString;
@protocol HFPrimaryStateWriter;


#import "HFControlItem.h"
#import "HFValueTransformer.h"

@interface HFPrimaryStateControlItem : HFControlItem <HFPrimaryStateWriter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *primaryStateCharacteristicType; // ivar: _primaryStateCharacteristicType
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFValueTransformer *valueTransformer; // ivar: _valueTransformer


+(Class)valueClass;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicType:(id)arg1 valueTransformer:(id)arg2 displayResults:(id)arg3 ;
-(id)toggleValue;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writePrimaryState:(NSInteger)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif