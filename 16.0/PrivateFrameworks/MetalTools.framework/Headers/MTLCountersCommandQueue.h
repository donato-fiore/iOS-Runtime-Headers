// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOUNTERSCOMMANDQUEUE_H
#define MTLCOUNTERSCOMMANDQUEUE_H

@class NSString;


#import "MTLToolsCommandQueue.h"

@interface MTLCountersCommandQueue : MTLToolsCommandQueue

@property (readonly, nonatomic) NSString *tracePath; // ivar: _tracePath


-(id)commandBuffer;
-(id)commandBufferWithDescriptor:(id)arg0 ;
-(id)commandBufferWithUnretainedReferences;
-(id)initWithCommandQueue:(id)arg0 device:(id)arg1 ;


@end


#endif