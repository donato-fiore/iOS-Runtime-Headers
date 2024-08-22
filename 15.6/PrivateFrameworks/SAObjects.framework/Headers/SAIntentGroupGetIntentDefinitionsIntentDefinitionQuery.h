// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPGETINTENTDEFINITIONSINTENTDEFINITIONQUERY_H
#define SAINTENTGROUPGETINTENTDEFINITIONSINTENTDEFINITIONQUERY_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *entity;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *verb;


+(id)getIntentDefinitionsIntentDefinitionQuery;
+(id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif