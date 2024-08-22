// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYNUMBERSETTING_H
#define HMACCESSORYNUMBERSETTING_H

@class NSNumber;


#import "HMAccessorySetting.h"

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *stepValue;


-(Class)valueClass;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 ;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4 stepValue:(id)arg5 ;


@end


#endif