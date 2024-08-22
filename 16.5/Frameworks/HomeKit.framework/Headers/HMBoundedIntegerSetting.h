// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBOUNDEDINTEGERSETTING_H
#define HMBOUNDEDINTEGERSETTING_H



#import "HMImmutableSetting.h"

@interface HMBoundedIntegerSetting : HMImmutableSetting

@property (readonly) NSInteger integerValue; // ivar: _integerValue
@property (readonly) NSInteger maxValue; // ivar: _maxValue
@property (readonly) NSInteger minValue; // ivar: _minValue
@property (readonly) NSInteger valueStepSize; // ivar: _valueStepSize


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 integerValue:(NSInteger)arg2 maxValue:(NSInteger)arg3 minValue:(NSInteger)arg4 valueStepSize:(NSInteger)arg5 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 payload:(id)arg2 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;
-(id)settingValue;
-(id)settingWithSettingValue:(id)arg0 ;


@end


#endif