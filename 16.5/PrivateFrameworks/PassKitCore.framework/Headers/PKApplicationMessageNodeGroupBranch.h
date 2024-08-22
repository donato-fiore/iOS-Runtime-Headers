// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGENODEGROUPBRANCH_H
#define PKAPPLICATIONMESSAGENODEGROUPBRANCH_H

@class NSMutableArray, NSArray;


#import "PKApplicationMessageNode.h"
#import "PKApplicationMessageGroupDescriptor.h"

@interface PKApplicationMessageNodeGroupBranch : PKApplicationMessageNode {
    NSMutableArray *_children;
}


@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group; // ivar: _group




@end


#endif