// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TDPACKERNODE_H
#define _TDPACKERNODE_H


#import <Foundation/Foundation.h>

#import "_TDPackerNode.h"

@interface _TDPackerNode : NSObject

@property (retain, nonatomic) _TDPackerNode *down; // ivar: _down
@property (nonatomic) BOOL fit; // ivar: _fit
@property (nonatomic) *void node; // ivar: _node
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (retain, nonatomic) _TDPackerNode *right; // ivar: _right
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) BOOL used; // ivar: _used


-(void)dealloc;


@end


#endif