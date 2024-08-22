// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKQUADTREE_H
#define CKQUADTREE_H


#import <Foundation/Foundation.h>

#import "CKQuadTreeNode.h"

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode; // ivar: _rootNode


-(id)init;
-(id)initWithPoints:(id)arg0 ;
-(void)visit:(id)arg0 ;


@end


#endif