// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPPARSE_H
#define SAINTENTGROUPPARSE_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAIntentGroupDirectInvocation.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupParse : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAIntentGroupDirectInvocation *directInvocation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonIntent;
@property (copy, nonatomic) NSString *jsonIntentTypeName;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *nlv3Parse;
@property (copy, nonatomic) NSArray *nlv3ParseWithAlternatives;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *pegasusResults;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *siriKitIntent;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;


+(id)parse;
+(id)parseWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif