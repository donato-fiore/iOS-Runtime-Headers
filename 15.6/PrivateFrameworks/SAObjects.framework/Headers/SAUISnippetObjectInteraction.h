// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUISNIPPETOBJECTINTERACTION_H
#define SAUISNIPPETOBJECTINTERACTION_H



#import "SAUISnippetInteraction.h"
#import "SADomainObject.h"

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (retain, nonatomic) SADomainObject *object;


+(id)snippetObjectInteraction;
+(id)snippetObjectInteractionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif