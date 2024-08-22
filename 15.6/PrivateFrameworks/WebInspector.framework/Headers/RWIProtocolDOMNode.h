// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDOMNODE_H
#define RWIPROTOCOLDOMNODE_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDOMNode.h"

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *baseURL;
@property (nonatomic) int childNodeCount;
@property (copy, nonatomic) NSArray *children;
@property (retain, nonatomic) RWIProtocolDOMNode *contentDocument;
@property (copy, nonatomic) NSString *contentSecurityPolicyHash;
@property (nonatomic) NSInteger customElementState;
@property (copy, nonatomic) NSString *documentURL;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) NSInteger layoutContextType;
@property (copy, nonatomic) NSString *localName;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) int nodeType;
@property (copy, nonatomic) NSString *nodeValue;
@property (copy, nonatomic) NSArray *pseudoElements;
@property (nonatomic) NSInteger pseudoType;
@property (copy, nonatomic) NSString *publicId;
@property (nonatomic) NSInteger shadowRootType;
@property (copy, nonatomic) NSArray *shadowRoots;
@property (copy, nonatomic) NSString *systemId;
@property (retain, nonatomic) RWIProtocolDOMNode *templateContent;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *xmlVersion;


-(id)initWithNodeId:(int)arg0 nodeType:(int)arg1 nodeName:(id)arg2 localName:(id)arg3 nodeValue:(id)arg4 ;


@end


#endif