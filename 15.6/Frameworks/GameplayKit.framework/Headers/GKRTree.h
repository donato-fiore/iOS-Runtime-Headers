// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKRTREE_H
#define GKRTREE_H


#import <Foundation/Foundation.h>


@interface GKRTree : NSObject {
    *void _cRTree;
}


@property NSUInteger queryReserve; // ivar: _queryReserve


+(id)treeWithMaxNumberOfChildren:(NSUInteger)arg0 ;
-(id)elementsInBoundingRectMinrectMax;
-(id)init;
-(id)initWithMaxNumberOfChildren:(NSUInteger)arg0 ;
-(void)addElement:(id)arg0 boundingRectMin:(NSInteger)arg1 boundingRectMaxsplitStrategy;
-(void)dealloc;
-(void)removeElement:(id)arg0 boundingRectMinboundingRectMax;


@end


#endif