// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMNODEITERATOR_H
#define DOMNODEITERATOR_H

@protocol DOMNodeFilter;


#import "DOMObject.h"
#import "DOMNode.h"

@interface DOMNodeIterator : DOMObject

@property (readonly) BOOL expandEntityReferences;
@property (readonly) NSObject<DOMNodeFilter> *filter;
@property (readonly) BOOL pointerBeforeReferenceNode;
@property (readonly) DOMNode *referenceNode;
@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;


-(id)nextNode;
-(id)previousNode;
-(void)dealloc;
-(void)detach;


@end


#endif