// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAKNOWLEDGEKEYVALUENUMERICENTRY_H
#define SAKNOWLEDGEKEYVALUENUMERICENTRY_H

@class NSNumber;


#import "SAKnowledgeKeyValueEntry.h"

@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSNumber *value;


+(id)keyValueNumericEntry;
+(id)keyValueNumericEntryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif