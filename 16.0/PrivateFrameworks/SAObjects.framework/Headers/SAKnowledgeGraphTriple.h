// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAKNOWLEDGEGRAPHTRIPLE_H
#define SAKNOWLEDGEGRAPHTRIPLE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>



@property (nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *object;
@property (copy, nonatomic) NSString *predicate;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *subject;
@property (readonly) Class superclass;


+(id)graphTriple;
+(id)graphTripleWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif