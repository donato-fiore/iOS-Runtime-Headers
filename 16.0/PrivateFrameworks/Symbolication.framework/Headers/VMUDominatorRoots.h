// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUDOMINATORROOTS_H
#define VMUDOMINATORROOTS_H

@class NSEnumerator;


#import "VMUDominatorGraph.h"

@interface VMUDominatorRoots : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _i;
}




-(id)initWithDominatorGraph:(id)arg0 ;
-(id)nextObject;


@end


#endif