// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGESETLINKEDDATA_H
#define SAKNOWLEDGESETLINKEDDATA_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAKnowledgeSetLinkedData : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *linkedData;
@property (readonly) Class superclass;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif