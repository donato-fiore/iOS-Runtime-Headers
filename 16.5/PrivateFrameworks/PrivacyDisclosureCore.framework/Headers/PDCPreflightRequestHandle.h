// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCPREFLIGHTREQUESTHANDLE_H
#define PDCPREFLIGHTREQUESTHANDLE_H

@class NSString;
@protocol PDCPreflightRequestCanceling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDCPreflightRequestHandle : NSObject <PDCPreflightRequestCanceling>

 {
    atomic_flag _isComplete;
    NSObject<OS_dispatch_queue> *_queue;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)alreadyCompletedRequestHandle;
-(id)initWithQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)completeRequestWithResponse:(NSUInteger)arg0 ;


@end


#endif