// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHHAPTICPARAMETERATTRIBUTESIMPL_H
#define CHHAPTICPARAMETERATTRIBUTESIMPL_H

@class NSString;
@protocol CHHapticParameterAttributes;

#import <Foundation/Foundation.h>


@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly) float defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) float maxValue; // ivar: _maxValue
@property (readonly) float minValue; // ivar: _minValue
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMinValue:(float)arg0 maxValue:(float)arg1 defaultValue:(float)arg2 ;


@end


#endif