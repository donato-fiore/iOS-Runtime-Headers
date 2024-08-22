// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROPERTYVALIDATIONRULE_H
#define PLPROPERTYVALIDATIONRULE_H

@class NSArray, NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface PLPropertyValidationRule : NSObject

@property (retain, nonatomic) NSObject<NSObject> *expectedValue; // ivar: _expectedValue
@property (retain, nonatomic) NSObject<NSObject> *expectedValueRangeHigh; // ivar: _expectedValueRangeHigh
@property (retain, nonatomic) NSObject<NSObject> *expectedValueRangeLow; // ivar: _expectedValueRangeLow
@property (retain, nonatomic) NSArray *expectedValues; // ivar: _expectedValues
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)evaluateWithObject:(id)arg0 outMessage:(*id)arg1 ;
-(id)currentValuesOfObject:(id)arg0 ;
-(id)descriptionOfCurrentValuesOfObject:(id)arg0 ;
-(id)predicate;
-(id)reverseRule;


@end


#endif