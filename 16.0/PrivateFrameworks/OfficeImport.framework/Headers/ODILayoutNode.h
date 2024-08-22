// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODILAYOUTNODE_H
#define ODILAYOUTNODE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ODDPoint.h"
#import "ODDAlgorithm.h"
#import "ODDShape.h"

@interface ODILayoutNode : NSObject {
    ODDPoint *mPoint;
    ODDAlgorithm *mAlgorithm;
    ODDShape *mShape;
    NSMutableArray *mChildren;
}




-(id)initWithLayoutNode:(id)arg0 point:(id)arg1 ;
-(id)initWithLayoutNode:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processAlgorithm:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processChoose:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processForEach:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processLayoutNode:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processLayoutObjects:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;
-(void)processShape:(id)arg0 state:(struct ODILayoutNodeState *)arg1 ;


@end


#endif