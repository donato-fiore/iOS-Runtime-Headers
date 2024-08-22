// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPPROTOBUFMESSAGE_H
#define SAINTENTGROUPPROTOBUFMESSAGE_H

@class NSData, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupProtobufMessage : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugString;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeName;


+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif