// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TOPLEVELTREENODE_H
#define TOPLEVELTREENODE_H



#import "GPBMessage.h"
#import "SignedObject.h"

@interface TopLevelTreeNode : GPBMessage

@property (nonatomic) BOOL hasPatHead;
@property (retain, nonatomic) SignedObject *patHead;


+(id)descriptor;


@end


#endif