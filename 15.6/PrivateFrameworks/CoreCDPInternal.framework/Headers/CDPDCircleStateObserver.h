// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDCIRCLESTATEOBSERVER_H
#define CDPDCIRCLESTATEOBSERVER_H

@class NSMutableArray, NSString;
@protocol CDPDXPCEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener>

 {
    int _circleChangeToken;
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableArray *_circleObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(char *)_notificationName;
-(id)init;
-(void)dealloc;
-(void)eventReceived:(char *)arg0 eventValue:(NSUInteger)arg1 ;
-(void)observeChangeToState:(NSUInteger)arg0 circleProxy:(id)arg1 handler:(id)arg2 ;
-(void)observeCircleStateWithCircleProxy:(id)arg0 changeHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 ;
-(void)stopObservingCircleStatusChange;


@end


#endif