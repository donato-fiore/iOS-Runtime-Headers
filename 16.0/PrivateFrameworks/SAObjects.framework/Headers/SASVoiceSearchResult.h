// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVOICESEARCHRESULT_H
#define SASVOICESEARCHRESULT_H

@class NSString, NSDictionary, NSData, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSData *result;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSNumber *statusCode;
@property (readonly) Class superclass;


+(id)voiceSearchResult;
+(id)voiceSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif