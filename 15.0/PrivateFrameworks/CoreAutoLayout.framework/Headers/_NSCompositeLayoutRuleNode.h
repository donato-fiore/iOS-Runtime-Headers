// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCOMPOSITELAYOUTRULENODE_H
#define _NSCOMPOSITELAYOUTRULENODE_H

@class NSLayoutRuleNode, NSMutableArray, NSArray, NSString;
@protocol _NSLayoutRuleNodeParent;



@interface _NSCompositeLayoutRuleNode : NSLayoutRuleNode <_NSLayoutRuleNodeParent>

 {
    NSMutableArray *_childNodes;
}


@property (readonly, copy) NSArray *_childRuleNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_addChildRuleNode:(id)arg0 ;
-(void)_removeChildRuleNode:(id)arg0 ;
-(void)dealloc;


@end


#endif