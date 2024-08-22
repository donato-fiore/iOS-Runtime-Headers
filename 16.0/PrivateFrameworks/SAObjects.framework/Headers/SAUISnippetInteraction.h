// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISNIPPETINTERACTION_H
#define SAUISNIPPETINTERACTION_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *snippetId;
@property (readonly) Class superclass;


+(id)snippetInteraction;
+(id)snippetInteractionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif