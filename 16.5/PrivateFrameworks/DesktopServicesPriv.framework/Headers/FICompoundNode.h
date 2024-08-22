// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FICOMPOUNDNODE_H
#define FICOMPOUNDNODE_H

@class NSArray;


#import "FICustomNode.h"

@interface FICompoundNode : FICustomNode {
    NSArray *_nodes;
    unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> _nodesToComplete;
    BOOL _openSyncStartedSent;
}




-(id)fileURL;
-(id)fpItem;
-(id)initWithFINodes:(id)arg0 ;
-(id)iteratorIncludingInvisibleItems:(BOOL)arg0 synchronous:(BOOL)arg1 ;
-(id)nodesToObserve;
-(void)dispatchEvent:(id)arg0 forObserver:(id)arg1 ;
-(void)synchronizeChildren:(unsigned int)arg0 events:(*void)arg1 ;


@end


#endif