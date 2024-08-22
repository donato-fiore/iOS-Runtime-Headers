// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUCALLMONITOR_H
#define MRUCALLMONITOR_H

@class CXCallObserver, NSString, NSHashTable;
@protocol CXCallObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRUCallMonitor : NSObject <CXCallObserverDelegate>



@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic, getter=isOnCall) BOOL onCall; // ivar: _onCall
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(BOOL)isCallActive;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateOnCall;


@end


#endif