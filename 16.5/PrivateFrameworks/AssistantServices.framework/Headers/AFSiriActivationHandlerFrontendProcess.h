// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIACTIVATIONHANDLERFRONTENDPROCESS_H
#define AFSIRIACTIVATIONHANDLERFRONTENDPROCESS_H

@class NSMutableDictionary, NSString;
@protocol AFNotifyObserverDelegate, AFSiriActivationHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSiriActivationConnection.h"
#import "AFNotifyObserver.h"

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriActivationConnection *_connection;
    AFNotifyObserver *_clientStateObserver;
    NSMutableDictionary *_clientStateTransitionHandlersByTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleContext:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)_waitUntilListeningForContext:(id)arg0 timeoutInterval:(CGFloat)arg1 completion:(id)arg2 ;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;


@end


#endif