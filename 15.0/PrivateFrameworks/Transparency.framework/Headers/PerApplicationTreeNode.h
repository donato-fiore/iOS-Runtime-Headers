// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PERAPPLICATIONTREENODE_H
#define PERAPPLICATIONTREENODE_H



#import "GPBMessage.h"
#import "SignedMapHead.h"

@interface PerApplicationTreeNode : GPBMessage

@property (nonatomic) BOOL hasObjectMapHead;
@property (nonatomic) BOOL hasRevocationMapHead;
@property (retain, nonatomic) SignedMapHead *objectMapHead;
@property (retain, nonatomic) SignedMapHead *revocationMapHead;


+(id)descriptor;


@end


#endif