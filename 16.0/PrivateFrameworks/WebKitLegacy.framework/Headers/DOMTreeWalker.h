// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMTREEWALKER_H
#define DOMTREEWALKER_H

@protocol DOMNodeFilter;


#import "DOMObject.h"
#import "DOMNode.h"

@interface DOMTreeWalker : DOMObject

@property (retain) DOMNode *currentNode;
@property (readonly) BOOL expandEntityReferences;
@property (readonly) NSObject<DOMNodeFilter> *filter;
@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;


-(id)firstChild;
-(id)lastChild;
-(id)nextNode;
-(id)nextSibling;
-(id)parentNode;
-(id)previousNode;
-(id)previousSibling;
-(void)dealloc;


@end


#endif