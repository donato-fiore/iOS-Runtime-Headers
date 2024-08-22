// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMSERVERINTERACTIONCONTROLLER_H
#define FMSERVERINTERACTIONCONTROLLER_H

@class NSMutableSet, NSString, NSOperationQueue, NSURLSession, NSURLSessionConfiguration;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMServerInteractionController : NSObject <NSURLSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (readonly) Class superclass;


-(CGFloat)_simulatedLatency;
-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)cancelAllCommands;
-(void)cancelCommand:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)networkActivityStatus:(BOOL)arg0 ;
-(void)processResponseForCommand:(id)arg0 callback:(id)arg1 ;
-(void)sendCommand:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif