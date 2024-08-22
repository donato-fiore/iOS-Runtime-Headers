// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDNODEPOINT_H
#define ODDNODEPOINT_H

@class NSMutableArray;


#import "ODDDataPoint.h"
#import "ODDNodePoint.h"
#import "ODDTransitionPoint.h"

@interface ODDNodePoint : ODDDataPoint {
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}




-(id)children;
-(id)parent;
-(id)parentTransition;
-(id)siblingTransition;
-(void)addChild:(id)arg0 order:(NSUInteger)arg1 ;
-(void)setParentTransition:(id)arg0 ;
-(void)setSiblingTransition:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif