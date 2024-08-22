// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUCALLTREELEAFNODE_H
#define VMUCALLTREELEAFNODE_H

@class NSCountedSet, NSString;


#import "VMUCallTreeNode.h"

@interface VMUCallTreeLeafNode : VMUCallTreeNode {
    NSCountedSet *_addresses;
    NSString *_combinedName;
}




-(id)init;
-(id)initWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 ;
-(void)addAddress:(NSUInteger)arg0 ;
-(void)getBrowserName:(id)arg0 ;


@end


#endif