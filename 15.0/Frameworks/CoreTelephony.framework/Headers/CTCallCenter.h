// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCALLCENTER_H
#define CTCALLCENTER_H

@class NSSet, CXCallObserver, NSString;
@protocol CXCallObserverDelegate;

#import <Foundation/Foundation.h>


@interface CTCallCenter : NSObject <CXCallObserverDelegate>

 {
    queue _queue;
    queue clientQueue;
    NSSet *_currentCalls;
    id *_callEventHandler;
}


@property (copy, nonatomic) id *callEventHandler;
@property (retain) CXCallObserver *callKitObserver; // ivar: _callKitObserver
@property (retain) NSSet *currentCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)calculateCallStateChanges_sync:(id)arg0 ;
-(BOOL)getCurrentCallSetFromServer_sync:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(struct dispatch_queue_s *)arg0 ;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)dealloc;
-(void)handleCallStatusChange_sync:(id)arg0 ;
-(void)initialize;


@end


#endif