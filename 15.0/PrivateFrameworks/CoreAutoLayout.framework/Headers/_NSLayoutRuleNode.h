// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSLAYOUTRULENODE_H
#define _NSLAYOUTRULENODE_H

@protocol _NSLayoutRuleNodeParent, NSLayoutRule;

#import <Foundation/Foundation.h>


@interface _NSLayoutRuleNode : NSObject

@property NSObject<_NSLayoutRuleNodeParent> *parentNode; // ivar: _parentNode
@property (copy) NSObject<NSLayoutRule> *representedRule; // ivar: _representedRule


-(id)description;
-(id)initWithRule:(id)arg0 ;
-(void)dealloc;


@end


#endif