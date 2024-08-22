// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSNIPPET_H
#define SAINTENTGROUPSNIPPET_H

@class NSString, NSArray, NSNumber;
@protocol SAServerBoundCommand;


#import "SAUISnippet.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupSnippet : SAUISnippet

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (retain, nonatomic) NSObject<SAServerBoundCommand> *processSynapseFlowCommand;
@property (copy, nonatomic) NSArray *snippetTemplates;
@property (nonatomic) BOOL widgetAllowed;
@property (copy, nonatomic) NSNumber *widgetIndex;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif