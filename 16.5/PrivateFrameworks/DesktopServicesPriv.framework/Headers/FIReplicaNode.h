// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIREPLICANODE_H
#define FIREPLICANODE_H



#import "FINode.h"
#import "FIDSNode.h"

@interface FIReplicaNode : FINode {
    FIDSNode *_node;
}




-(*void)asTNode;
-(id)description;
-(id)init:(id)arg0 ;
-(id)original;
-(void)dealloc;


@end


#endif