// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGESETVALUESFORKEYS_H
#define SAKNOWLEDGESETVALUESFORKEYS_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAKnowledgeSetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entries;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)setValuesForKeys;
+(id)setValuesForKeysWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif