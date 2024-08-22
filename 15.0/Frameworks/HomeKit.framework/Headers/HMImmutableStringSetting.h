// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIMMUTABLESTRINGSETTING_H
#define HMIMMUTABLESTRINGSETTING_H

@class NSString;


#import "HMImmutableSetting.h"

@interface HMImmutableStringSetting : HMImmutableSetting

@property (readonly, copy) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 payload:(id)arg2 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 stringValue:(id)arg2 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;
-(id)settingValue;
-(id)settingWithSettingValue:(id)arg0 ;


@end


#endif