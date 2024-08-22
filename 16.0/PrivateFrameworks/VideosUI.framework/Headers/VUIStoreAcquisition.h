// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISTOREACQUISITION_H
#define VUISTOREACQUISITION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VUIAcquisitionRequest.h"

@interface VUIStoreAcquisition : NSObject {
    NSMutableArray *_pendingQueue;
    NSUInteger _concurrentCount;
    VUIAcquisitionRequest *_activeRequest;
}




+(id)sharedInstance;
-(id)acquireWithProperties:(id)arg0 completionBlock:(id)arg1 ;
-(id)init;
-(void)_handleCustomRequest:(id)arg0 ;
-(void)_handleRequest:(id)arg0 ;
-(void)_handleResponse:(id)arg0 responseDict:(id)arg1 forRequest:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)_processFirstRequest;
-(void)_processRequest:(id)arg0 ;
-(void)cancelAcquisition:(id)arg0 ;
-(void)postCrossProcessNotificationWithBuyParams:(id)arg0 error:(id)arg1 ;


@end


#endif