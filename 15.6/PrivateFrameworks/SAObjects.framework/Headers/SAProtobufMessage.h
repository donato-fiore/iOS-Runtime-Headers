// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPROTOBUFMESSAGE_H
#define SAPROTOBUFMESSAGE_H

@class NSData, NSString;


#import "SADomainObject.h"

@interface SAProtobufMessage : SADomainObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *typeName;


+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif