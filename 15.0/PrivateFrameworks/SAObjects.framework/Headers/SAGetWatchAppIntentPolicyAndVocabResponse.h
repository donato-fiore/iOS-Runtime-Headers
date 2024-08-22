// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGETWATCHAPPINTENTPOLICYANDVOCABRESPONSE_H
#define SAGETWATCHAPPINTENTPOLICYANDVOCABRESPONSE_H

@class NSDictionary, NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAGetWatchAppIntentPolicyAndVocabResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSDictionary *aceAppBundleInfos;
@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getWatchAppIntentPolicyAndVocabResponse;
+(id)getWatchAppIntentPolicyAndVocabResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif