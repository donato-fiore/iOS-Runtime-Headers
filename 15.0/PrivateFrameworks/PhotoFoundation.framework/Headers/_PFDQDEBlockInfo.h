// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFDQDEBLOCKINFO_H
#define _PFDQDEBLOCKINFO_H



#import "PFDispatchQueueStatisticsBlockInfo.h"
#import "_PFDQDECallSite.h"

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo

@property (readonly) _PFDQDECallSite *callSite; // ivar: _callSite


-(id)backtraceWithPrefix:(id)arg0 ;
-(id)init;


@end


#endif