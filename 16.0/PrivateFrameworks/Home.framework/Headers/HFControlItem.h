// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCONTROLITEM_H
#define HFCONTROLITEM_H

@class NSSet, NSString, NSDictionary;
@protocol NAIdentifiable, NSCopying, HFAggregatedCharacteristicValueSource;


#import "HFItem.h"
#import "HFControlItemCharacteristicOptions.h"

@interface HFControlItem : HFItem <NAIdentifiable, NSCopying>



@property (readonly, nonatomic) HFControlItemCharacteristicOptions *characteristicOptions; // ivar: _characteristicOptions
@property (readonly, nonatomic) NSSet *characteristicTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *displayResults; // ivar: _displayResults
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger sortPriority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFAggregatedCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(Class)valueClass;
+(id)na_identity;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(NSInteger)_primaryStateForValue:(id)arg0 ;
-(NSUInteger)_accessorySuspendedState;
-(id)_descriptionWithCharacteristicOptions:(BOOL)arg0 includeResults:(BOOL)arg1 ;
-(id)_standardResultsForResultValue:(id)arg0 characteristicValuesByType:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_tintColor;
-(id)characteristicValuesByTypeForBatchReadResponse:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicTypes:(id)arg1 displayResults:(id)arg2 ;
-(id)metadataForCharacteristicType:(id)arg0 ;
-(id)normalizedCharacteristicValuesForValues:(id)arg0 ;
-(id)normalizedValueForCharacteristicValue:(id)arg0 ofType:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)servicePredicateForCharacteristicType:(id)arg0 withUsage:(NSUInteger)arg1 ;
-(id)valueForCharacteristicType:(id)arg0 inBatchReadResponse:(id)arg1 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif