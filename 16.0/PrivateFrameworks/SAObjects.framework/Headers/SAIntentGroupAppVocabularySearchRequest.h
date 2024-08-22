// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPAPPVOCABULARYSEARCHREQUEST_H
#define SAINTENTGROUPAPPVOCABULARYSEARCHREQUEST_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>



@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appVocabularyType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *query;
@property (readonly) Class superclass;


+(id)appVocabularySearchRequest;
+(id)appVocabularySearchRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif