// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCLOUDKITASYNCOPERATION_H
#define WFCLOUDKITASYNCOPERATION_H

@class NSOperation;



@interface WFCloudKitAsyncOperation : NSOperation

@property BOOL isExecuting; // ivar: _isExecuting
@property BOOL isFinished; // ivar: _isFinished


-(void)finishExecuting;
-(void)start;
-(void)startExecuting;


@end


#endif