// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKCATEGORY_H
#define _DKCATEGORY_H

@class DKObject, NSString;
@protocol _DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType;


#import "_DKCategoryType.h"

@interface _DKCategory : DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>



@property (retain) _DKCategoryType *categoryType; // ivar: _categoryType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger integerValue; // ivar: _integerValue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_categoryFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 cache:(id)arg2 ;
+(id)categoryWithInteger:(NSInteger)arg0 type:(id)arg1 ;
+(id)entityName;
+(id)fromPBCodable:(id)arg0 ;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSInteger)compareValue:(id)arg0 ;
-(NSInteger)typeCode;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteger:(NSInteger)arg0 type:(id)arg1 cache:(id)arg2 ;
-(id)objectType;
-(id)primaryValue;
-(id)stringValue;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif