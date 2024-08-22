// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFFEATUREVALUE_H
#define LCFFEATUREVALUE_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface LCFFeatureValue : NSObject

@property (readonly, nonatomic) NSNumber *boolValue; // ivar: _boolValue
@property (readonly, nonatomic) NSNumber *doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) NSNumber *intValue; // ivar: _intValue
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) NSArray *stride; // ivar: _stride
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSNumber *timeBucketValue; // ivar: _timeBucketValue
@property (readonly, nonatomic) NSString *typeDb; // ivar: _typeDb
@property (readonly, nonatomic) NSString *valueInString; // ivar: _valueInString
@property (readonly, nonatomic) NSArray *valuesFlatten; // ivar: _valuesFlatten


-(id)initEmpty;
-(id)initWithBoolValue:(id)arg0 ;
-(id)initWithDoubleValue:(id)arg0 ;
-(id)initWithIntValue:(id)arg0 ;
-(id)initWithMultiArray:(id)arg0 stride:(id)arg1 valuesFlatten:(id)arg2 ;
-(id)initWithStringValue:(id)arg0 ;
-(id)initWithTimeBucketValue:(id)arg0 ;


@end


#endif