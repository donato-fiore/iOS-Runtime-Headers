// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATBATCHREMOTETASKOPERATION_H
#define CATBATCHREMOTETASKOPERATION_H

@class NSArray, NSOperationQueue;


#import "CATOperation.h"

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}


@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;


-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithRemoteTaskOperations:(id)arg0 ;
-(id)initWithTaskClient:(id)arg0 requests:(id)arg1 ;
-(void)cancel;
-(void)cancelSubOperations;
-(void)main;
-(void)remoteTaskDidFinish:(id)arg0 ;


@end


#endif