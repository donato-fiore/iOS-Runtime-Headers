// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEBUGLOGSTACK_H
#define _UIDEBUGLOGSTACK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIDebugLogNode.h"

@interface _UIDebugLogStack : NSObject {
    NSMutableArray *_stack;
}


@property (readonly, nonatomic) _UIDebugLogNode *rootNode;


-(id)_topNode;
-(id)init;
-(id)popNode;
-(void)addMessage:(id)arg0 ;
-(void)performWithPushedNode:(id)arg0 block:(id)arg1 ;
-(void)pushNode:(id)arg0 ;


@end


#endif