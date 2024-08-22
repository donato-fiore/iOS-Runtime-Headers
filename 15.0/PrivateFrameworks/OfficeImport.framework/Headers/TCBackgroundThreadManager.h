// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCBACKGROUNDTHREADMANAGER_H
#define TCBACKGROUNDTHREADMANAGER_H

@protocol TCCancelDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TCMessageContext.h"
#import "TCProgressContext.h"

@interface TCBackgroundThreadManager : NSObject {
    id<TCCancelDelegate> *mCancelDelegate;
    BOOL mIsWaiting;
    NSUInteger mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
}


@property (readonly) BOOL isCancelled;
@property (retain) TCMessageContext *messageContext; // ivar: mMessageContext
@property (retain) TCProgressContext *progressContext; // ivar: mProgressContext


-(id)initWithCancelDelegate:(id)arg0 ;
-(void)addASyncBlock:(id)arg0 ;
-(void)dealloc;
-(void)waitUntilComplete;


@end


#endif