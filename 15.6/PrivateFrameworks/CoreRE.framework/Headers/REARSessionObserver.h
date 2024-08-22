// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REARSESSIONOBSERVER_H
#define REARSESSIONOBSERVER_H

@class ARSession, NSMutableSet, NSString;
@protocol ARInternalSessionObserver;

#import <Foundation/Foundation.h>


@interface REARSessionObserver : NSObject <ARInternalSessionObserver>

 {
    ARSession *_session;
    NSMutableSet *_activeChunks;
    ? _queuedUpdates;
    UnfairLock _queueLock;
    ? _renderTransform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init:(id)arg0 ;
-(struct Queue<QueuedUpdateMessage> )getQueuedUpdatesSinceLast;
-(void)dealloc;
-(void)session:(id)arg0 ;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;


@end


#endif