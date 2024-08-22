// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACCESSIBILITYVALUE_H
#define HKACCESSIBILITYVALUE_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface HKAccessibilityValue : NSObject

@property (readonly, nonatomic) NSNumber *valueAsNumber; // ivar: _valueAsNumber
@property (readonly, nonatomic) NSString *valueDescription; // ivar: _valueDescription
@property (readonly, nonatomic) NSString *valueTitle; // ivar: _valueTitle
@property (readonly, nonatomic) NSString *valueType; // ivar: _valueType


-(id)description;
-(id)initWithValueTitle:(id)arg0 valueType:(id)arg1 valueDescription:(id)arg2 valueAsNumber:(id)arg3 ;


@end


#endif