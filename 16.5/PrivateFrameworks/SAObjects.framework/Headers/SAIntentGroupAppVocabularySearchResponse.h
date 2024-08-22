// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPAPPVOCABULARYSEARCHRESPONSE_H
#define SAINTENTGROUPAPPVOCABULARYSEARCHRESPONSE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAAceSerializable;


#import "SABaseCommand.h"

@interface SAIntentGroupAppVocabularySearchResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *vocabularyStrings;


+(id)appVocabularySearchResponse;
+(id)appVocabularySearchResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif