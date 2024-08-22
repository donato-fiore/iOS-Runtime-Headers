// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCLIENTSIDEPAUSECONTEXT_H
#define MSCLIENTSIDEPAUSECONTEXT_H

@class NSString, MSTimerGate, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSClientSidePauseContext : NSObject {
    NSString *_UUID;
}


@property (retain, nonatomic) MSTimerGate *gate; // ivar: _gate
@property (retain, nonatomic) NSXPCConnection *server; // ivar: _server
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue


-(id)initWithServer:(id)arg0 ;
-(void)resume;


@end


#endif