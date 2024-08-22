// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINSPECTABLEVALUECOLLECTION_H
#define HKINSPECTABLEVALUECOLLECTION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKInspectableValue.h"

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>



@property (readonly, nonatomic) NSArray *collection; // ivar: _collection
@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elementTags; // ivar: _elementTags
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKInspectableValue *inspectableValue;
@property (readonly, nonatomic) NSArray *inspectableValues;
@property (readonly, nonatomic) HKInspectableValue *max;
@property (readonly, nonatomic) HKInspectableValue *min;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unitString;


+(BOOL)hasNoValue:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_unitStringForValue:(id)arg0 ;
+(id)_unitStringForValueCollection:(id)arg0 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
+(id)inspectableValueCollectionListWithValues:(id)arg0 ;
+(id)inspectableValueCollectionRangeWithMax:(id)arg0 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg0 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg0 max:(id)arg1 ;
+(id)inspectableValueCollectionSingleWithValue:(id)arg0 ;
+(id)inspectableValueCollectionTaggedListWithValues:(id)arg0 tags:(id)arg1 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)referenceRangeStatusWithRanges:(id)arg0 ;
-(id)_initWithCollectionType:(NSInteger)arg0 collection:(id)arg1 ;
-(id)_initWithCollectionType:(NSInteger)arg0 collection:(id)arg1 tags:(id)arg2 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueInRangeWithReferenceRanges:(id)arg0 includeUnitString:(BOOL)arg1 ;
-(id)valueInRangeWithReferenceRanges:(id)arg0 includeUnitString:(BOOL)arg1 allowsNullRange:(BOOL)arg2 ;
-(id)valuesWithTag:(id)arg0 ;
-(void)_assertCollectionType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif