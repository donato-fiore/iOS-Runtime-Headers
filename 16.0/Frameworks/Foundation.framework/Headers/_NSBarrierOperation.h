// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSBARRIEROPERATION_H
#define _NSBARRIEROPERATION_H



#import "NSOperation.h"

@interface _NSBarrierOperation : NSOperation {
    id *_block;
}




+(BOOL)_removesDependenciesAfterFinish;
-(NSInteger)queuePriority;
-(void)dealloc;
-(void)main;


@end


#endif