// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROPERATIONWITHPRIORITY_H
#define HMMTROPERATIONWITHPRIORITY_H

@class NSOperation;



@interface HMMTROperationWithPriority : NSOperation

@property (readonly, nonatomic) id *operationBlock; // ivar: _operationBlock


-(id)initWithQueuePriority:(NSInteger)arg0 block:(id)arg1 ;
-(void)main;


@end


#endif