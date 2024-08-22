// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMNUMBERSETTING_H
#define HMNUMBERSETTING_H

@class NSNumber;


#import "HMSetting.h"

@interface HMNumberSetting : HMSetting

@property (readonly) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) NSNumber *stepValue; // ivar: _stepValue


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 value:(id)arg3 properties:(NSUInteger)arg4 minimumValue:(id)arg5 maximumValue:(id)arg6 stepValue:(id)arg7 ;
-(id)internalValue;
-(id)valueForUpdate:(id)arg0 ;


@end


#endif