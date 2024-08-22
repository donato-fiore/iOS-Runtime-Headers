// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIDSNODE_H
#define FIDSNODE_H



#import "FINode.h"

@interface FIDSNode : FINode {
    TPrivateNodeInstantiationEnabler _node;
}




-(*void)asTNode;
-(id)iteratorIncludingInvisibleItems:(BOOL)arg0 synchronous:(BOOL)arg1 ;
-(id)nodesToObserve;
-(void)dealloc;
-(void)dispatchEvent:(id)arg0 forObserver:(id)arg1 ;
-(void)synchronizeChildren:(unsigned int)arg0 events:(*void)arg1 ;


@end


#endif