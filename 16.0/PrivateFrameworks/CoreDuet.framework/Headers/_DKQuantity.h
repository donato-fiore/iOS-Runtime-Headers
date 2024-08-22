// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKQUANTITY_H
#define _DKQUANTITY_H

@class DKObject, NSString;
@protocol _DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType;


#import "_DKQuantityType.h"

@interface _DKQuantity : DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat doubleValue; // ivar: _doubleValue
@property (readonly) NSUInteger hash;
@property (retain) _DKQuantityType *quantityType; // ivar: _quantityType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fromPBCodable:(id)arg0 ;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
+(id)quantityWithDouble:(CGFloat)arg0 type:(id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareValue:(id)arg0 ;
-(NSInteger)typeCode;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 type:(id)arg1 ;
-(id)objectType;
-(id)primaryValue;
-(id)stringValue;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif