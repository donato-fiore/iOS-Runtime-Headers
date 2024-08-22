// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONSORTBLOCK_H
#define FCFEEDTRANSFORMATIONSORTBLOCK_H



#import "FCFeedTransformationSort.h"

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort

@property (copy, nonatomic) id *sortBlock; // ivar: _sortBlock


+(id)transformationWithSortBlock:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif