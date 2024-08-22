// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIOPARAMETERDESCRIPTION_H
#define MIOPARAMETERDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MIONumericConstraint.h"

@interface MIOParameterDescription : NSObject

@property (readonly, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) MIONumericConstraint *numericConstraint; // ivar: _numericConstraint


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithKey:(id)arg0 boolParameter:(*void)arg1 ;
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 numericConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg0 doubleParameter:(*void)arg1 ;
-(id)initWithKey:(id)arg0 int64Parameter:(*void)arg1 ;
-(id)initWithKey:(id)arg0 stringParameter:(*void)arg1 ;


@end


#endif