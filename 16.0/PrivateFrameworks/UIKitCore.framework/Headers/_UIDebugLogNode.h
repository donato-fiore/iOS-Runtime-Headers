// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEBUGLOGNODE_H
#define _UIDEBUGLOGNODE_H

@class UIDebugLogMessage, NSMutableArray;


#import "_UIDebugLogNodeTreeStyle.h"

@interface _UIDebugLogNode : UIDebugLogMessage {
    NSMutableArray *_childMessages;
}


@property (readonly, nonatomic) BOOL hasMessages;
@property (retain, nonatomic) _UIDebugLogNodeTreeStyle *treeStyle; // ivar: _treeStyle


+(id)rootNode;
-(BOOL)_isNode;
-(id)attributedDescription;
-(id)description;
-(id)initWithString:(id)arg0 attributedString:(id)arg1 ;
-(void)__genericAppendChildDescription:(id)arg0 withPrefix:(id)arg1 inheritedTreeStyle:(id)arg2 recursionSelector:(SEL)arg3 appendHandler:(id)arg4 ;
-(void)_appendAttributedChildDescription:(id)arg0 withPrefix:(id)arg1 inheritedTreeStyle:(id)arg2 ;
-(void)_appendChildDescription:(id)arg0 withPrefix:(id)arg1 inheritedTreeStyle:(id)arg2 ;
-(void)addMessage:(id)arg0 ;


@end


#endif