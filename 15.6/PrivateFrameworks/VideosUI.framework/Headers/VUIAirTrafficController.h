// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAIRTRAFFICCONTROLLER_H
#define VUIAIRTRAFFICCONTROLLER_H

@class ATConnection, NSString, NSMutableSet;
@protocol ATConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIAirTrafficController : NSObject <ATConnectionDelegate>



@property (retain, nonatomic) ATConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)defaultController;
-(id)init;
-(void)_onConnectionQueue_startObservingIfIdle;
-(void)_onConnectionQueue_stopObservingIfIdle;
-(void)addObserver:(id)arg0 ;
-(void)connection:(id)arg0 updatedProgress:(id)arg1 ;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;


@end


#endif