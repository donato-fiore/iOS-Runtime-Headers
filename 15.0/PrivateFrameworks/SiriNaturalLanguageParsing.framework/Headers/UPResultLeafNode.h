// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPRESULTLEAFNODE_H
#define UPRESULTLEAFNODE_H

@class NSString;


#import "UPResultNode.h"
#import "UPResultStructuredDataNode.h"

@interface UPResultLeafNode : UPResultNode

@property (readonly, copy) NSString *semanticValue; // ivar: _semanticValue
@property (readonly, copy) UPResultStructuredDataNode *structuredData; // ivar: _structuredData
@property (readonly, copy) NSString *text; // ivar: _text


-(id)_dictionaryRepresentation;
-(id)initWithLabel:(id)arg0 andText:(id)arg1 andSemanticValue:(id)arg2 andStructuredData:(id)arg3 ;


@end


#endif