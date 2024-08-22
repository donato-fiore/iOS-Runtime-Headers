// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKQUADTREENODE_H
#define GKQUADTREENODE_H


#import <Foundation/Foundation.h>


@interface GKQuadtreeNode : NSObject {
    *void _cQuadTreeNode;
}


@property (readonly, nonatomic) GKQuad quad; // ivar: _quad


-(*void)cQuadTreeNode;
-(id)max;
-(id)min;
-(void)setCQuadTreeNode:(*void)arg0 ;


@end


#endif