// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGEKEYVALUEENTRY_H
#define SAKNOWLEDGEKEYVALUEENTRY_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeType;
@property (readonly) Class superclass;


+(id)keyValueEntryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif