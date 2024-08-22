// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISURLOPERATIONPOOLOPERATION_H
#define ISURLOPERATIONPOOLOPERATION_H

@class NSMutableArray;


#import "ISOperation.h"
#import "ISURLOperation.h"

@interface ISURLOperationPoolOperation : ISOperation {
    NSInteger _cancelCount;
    BOOL _forwardImmediately;
    NSMutableArray *_operations;
}


@property (readonly, nonatomic) ISURLOperation *mainOperation;


-(BOOL)containsOperation:(id)arg0 ;
-(void)_forwardResponseFromOperation:(id)arg0 toOperation:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)cancelOperation:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif