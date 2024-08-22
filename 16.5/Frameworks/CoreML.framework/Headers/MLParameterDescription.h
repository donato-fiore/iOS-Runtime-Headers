// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPARAMETERDESCRIPTION_H
#define MLPARAMETERDESCRIPTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLParameterKey.h"
#import "MLNumericConstraint.h"

@interface MLParameterDescription : NSObject <NSSecureCoding>



@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) MLParameterKey *key; // ivar: _key
@property (retain, nonatomic) MLNumericConstraint *numericConstraint; // ivar: _numericConstraint


+(BOOL)supportsSecureCoding;
+(id)parameterDescriptionForKey:(id)arg0 boolParameterSpec:(*void)arg1 ;
+(id)parameterDescriptionForKey:(id)arg0 defaultValue:(id)arg1 numericConstraint:(id)arg2 ;
+(id)parameterDescriptionForKey:(id)arg0 doubleParameterSpec:(*void)arg1 ;
+(id)parameterDescriptionForKey:(id)arg0 int64ParameterSpec:(*void)arg1 ;
+(id)parameterDescriptionForKey:(id)arg0 stringParameterSpec:(*void)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif