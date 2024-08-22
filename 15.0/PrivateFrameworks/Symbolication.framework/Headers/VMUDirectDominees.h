// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUDIRECTDOMINEES_H
#define VMUDIRECTDOMINEES_H

@class NSEnumerator;


#import "VMUDominatorGraph.h"

@interface VMUDirectDominees : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _node;
}




-(id)initWithDominatorGraph:(id)arg0 rootNode:(unsigned int)arg1 ;
-(id)nextObject;


@end


#endif