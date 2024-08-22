// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGENODEMULTIPLEGROUPBRANCH_H
#define PKAPPLICATIONMESSAGENODEMULTIPLEGROUPBRANCH_H

@class NSMutableArray, NSArray, NSString;


#import "PKApplicationMessageNode.h"

@interface PKApplicationMessageNodeMultipleGroupBranch : PKApplicationMessageNode {
    NSMutableArray *_children;
}


@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)createSummary;


@end


#endif