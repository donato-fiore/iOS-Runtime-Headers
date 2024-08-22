// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGEGETVALUESFORKEYS_H
#define SAKNOWLEDGEGETVALUESFORKEYS_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeType;
@property (readonly) Class superclass;


+(id)getValuesForKeys;
+(id)getValuesForKeysWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif