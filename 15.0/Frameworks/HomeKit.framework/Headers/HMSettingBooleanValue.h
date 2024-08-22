// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGBOOLEANVALUE_H
#define HMSETTINGBOOLEANVALUE_H



#import "HMImmutableSettingValue.h"

@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue; // ivar: _boolValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithBoolValue:(BOOL)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif