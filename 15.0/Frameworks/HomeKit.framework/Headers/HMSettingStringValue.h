// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGSTRINGVALUE_H
#define HMSETTINGSTRINGVALUE_H

@class NSString;


#import "HMImmutableSettingValue.h"

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif