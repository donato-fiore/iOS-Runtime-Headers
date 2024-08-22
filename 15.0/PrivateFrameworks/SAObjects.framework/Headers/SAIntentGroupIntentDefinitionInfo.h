// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPINTENTDEFINITIONINFO_H
#define SAINTENTGROUPINTENTDEFINITIONINFO_H

@class NSString, NSData;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupIntentDefinitionInfo : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *intentDefinition;
@property (readonly) Class superclass;


+(id)intentDefinitionInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif