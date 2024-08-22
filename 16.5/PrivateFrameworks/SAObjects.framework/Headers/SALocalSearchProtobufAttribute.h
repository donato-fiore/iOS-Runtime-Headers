// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHPROTOBUFATTRIBUTE_H
#define SALOCALSEARCHPROTOBUFATTRIBUTE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchProtobufAttribute : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)protobufAttribute;
+(id)protobufAttributeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif