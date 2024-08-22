// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYMPTOMSAWDOBSERVER_H
#define SYMPTOMSAWDOBSERVER_H

@class AWDObserver, NSMutableSet, NSString, NSMutableArray;
@protocol AWDObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SymptomsAWDObserver : NSObject <AWDObserverDelegate>



@property (retain, nonatomic) AWDObserver *awdObserver; // ivar: _awdObserver
@property (retain, nonatomic) NSMutableSet *combinedEvents; // ivar: _combinedEvents
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)addDelegate:(id)arg0 forEvents:(id)arg1 withQueue:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)observer:(id)arg0 handleEvent:(id)arg1 ;
-(void)removeDelegate:(id)arg0 withQueue:(id)arg1 completion:(id)arg2 ;
// -(void)updateAWDObserverRegistrationOnQueueWithCompletion:(id)arg0 completionQueue:(unk)arg1  ;


@end


#endif