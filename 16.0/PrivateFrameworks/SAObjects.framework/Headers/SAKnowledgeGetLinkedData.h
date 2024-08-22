// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGEGETLINKEDDATA_H
#define SAKNOWLEDGEGETLINKEDDATA_H

@class NSString, NSArray;
@protocol SAClientBoundCommand;


#import "SABaseClientBoundCommand.h"

@interface SAKnowledgeGetLinkedData : SABaseClientBoundCommand <SAClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *sparqlQuery;
@property (readonly) Class superclass;


+(id)getLinkedData;
+(id)getLinkedDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif