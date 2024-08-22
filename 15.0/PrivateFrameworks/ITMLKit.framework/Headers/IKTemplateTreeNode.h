// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKTEMPLATETREENODE_H
#define IKTEMPLATETREENODE_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKTemplateTreeNode.h"
#import "IKViewElementStyleComposer.h"
#import "IKViewElementStyle.h"

@interface IKTemplateTreeNode : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *childNodes; // ivar: _childNodes
@property (readonly, copy, nonatomic) NSString *nodeName; // ivar: _nodeName
@property (readonly, weak, nonatomic) IKTemplateTreeNode *parentNode; // ivar: _parentNode
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer; // ivar: _styleComposer
@property (readonly, copy, nonatomic) IKViewElementStyle *styleOverrides; // ivar: _styleOverrides


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNodeName:(id)arg0 styleOverrides:(id)arg1 parentNode:(id)arg2 ;


@end


#endif