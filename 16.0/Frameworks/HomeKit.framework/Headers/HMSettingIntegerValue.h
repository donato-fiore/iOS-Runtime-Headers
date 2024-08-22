// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSETTINGINTEGERVALUE_H
#define HMSETTINGINTEGERVALUE_H



#import "HMImmutableSettingValue.h"

@interface HMSettingIntegerValue : HMImmutableSettingValue

@property (readonly) NSInteger integerValue; // ivar: _integerValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithIntegerValue:(NSInteger)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif