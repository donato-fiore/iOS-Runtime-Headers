// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLFEATUREDESCRIPTION_H
#define MLFEATUREDESCRIPTION_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLDictionaryConstraint.h"
#import "MLImageConstraint.h"
#import "MLMultiArrayConstraint.h"
#import "MLSequenceConstraint.h"

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached; // ivar: _dictionaryConstraintCached
@property (readonly, nonatomic) MLImageConstraint *imageConstraintCached; // ivar: _imageConstraintCached
@property (readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached; // ivar: _multiArrayConstraintCached
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached; // ivar: _sequenceConstraintCached
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (retain) NSDictionary *valueConstraints; // ivar: _valueConstraints


+(BOOL)supportsSecureCoding;
+(id)featureDescriptionWithName:(id)arg0 type:(NSInteger)arg1 optional:(BOOL)arg2 constraints:(id)arg3 ;
-(BOOL)allowsValuesWithDescription:(id)arg0 ;
-(BOOL)isAllowedValue:(id)arg0 ;
-(BOOL)isAllowedValue:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)dictionaryConstraint;
-(id)imageConstraint;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 optional:(BOOL)arg2 contraints:(id)arg3 ;
-(id)multiArrayConstraint;
-(id)sequenceConstraint;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif