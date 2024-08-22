// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMULTISTATEVALUESET_H
#define HFMULTISTATEVALUESET_H

@class NSSet, HMCharacteristicMetadata, NSMutableDictionary, NSArray;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HFMultiStateValueSet : NSObject <NSCopying, NSFastEnumeration>



@property (readonly, nonatomic) NSSet *allValues;
@property (readonly, nonatomic) HMCharacteristicMetadata *characteristicMetadata; // ivar: _characteristicMetadata
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSMutableDictionary *displayResultsByValue; // ivar: _displayResultsByValue
@property (readonly, nonatomic) NSArray *sortedValues;
@property (copy, nonatomic) id *valueComparator; // ivar: _valueComparator


+(id)binaryValueSetWithCharacteristicMetadata:(id)arg0 firstValue:(id)arg1 firstTitle:(id)arg2 secondValue:(id)arg3 secondTitle:(id)arg4 ;
-(BOOL)addValue:(id)arg0 displayResults:(id)arg1 ;
-(BOOL)addValue:(id)arg0 displayResults:(id)arg1 addOnlyIfValid:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayResultsForValue:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristicMetadata:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)addValuesFromArray:(id)arg0 displayResultsGenerator:(id)arg1 ;
-(void)minusSet:(id)arg0 ;
-(void)removeValue:(id)arg0 ;
-(void)removeValuesFromArray:(id)arg0 ;
-(void)unionSet:(id)arg0 displayResultsGenerator:(id)arg1 ;


@end


#endif