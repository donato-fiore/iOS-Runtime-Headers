// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMNUMBERSETTING_H
#define HMNUMBERSETTING_H

@class NSNumber;


#import "HMSetting.h"

@interface HMNumberSetting : HMSetting

@property (readonly) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) NSNumber *stepValue; // ivar: _stepValue


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)internalValue;
-(id)valueForUpdate:(id)arg0 ;


@end


#endif