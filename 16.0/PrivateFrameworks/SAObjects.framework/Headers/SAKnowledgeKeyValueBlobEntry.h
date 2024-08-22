// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGEKEYVALUEBLOBENTRY_H
#define SAKNOWLEDGEKEYVALUEBLOBENTRY_H

@class NSData;


#import "SAKnowledgeKeyValueEntry.h"

@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSData *value;


+(id)keyValueBlobEntry;
+(id)keyValueBlobEntryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif