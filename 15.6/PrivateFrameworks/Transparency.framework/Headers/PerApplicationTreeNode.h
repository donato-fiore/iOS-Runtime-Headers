// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PERAPPLICATIONTREENODE_H
#define PERAPPLICATIONTREENODE_H



#import "GPBMessage.h"
#import "SignedObject.h"

@interface PerApplicationTreeNode : GPBMessage

@property (nonatomic) BOOL hasObjectMapHead;
@property (retain, nonatomic) SignedObject *objectMapHead;


+(id)descriptor;


@end


#endif