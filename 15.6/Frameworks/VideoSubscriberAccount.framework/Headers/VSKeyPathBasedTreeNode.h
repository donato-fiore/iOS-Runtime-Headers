// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSKEYPATHBASEDTREENODE_H
#define VSKEYPATHBASEDTREENODE_H

@class NSString;


#import "VSTreeNode.h"

@interface VSKeyPathBasedTreeNode : VSTreeNode

@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


-(id)init;
-(id)initWithRepresentedObject:(id)arg0 ;
-(id)initWithRepresentedObject:(id)arg0 keyPath:(id)arg1 ;


@end


#endif