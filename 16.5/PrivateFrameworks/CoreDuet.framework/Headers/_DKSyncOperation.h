// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCOPERATION_H
#define _DKSYNCOPERATION_H

@class NSOperation;



@interface _DKSyncOperation : NSOperation {
    uint8_t _state;
}




+(BOOL)_removesDependenciesAfterFinish;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)dealloc;
-(void)endOperation;
-(void)start;
-(void)startOperation;


@end


#endif