// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPSTREAMSERVER_H
#define RPSTREAMSERVER_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPStreamServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id *_selfRef;
    NSMutableDictionary *_streamSessions;
}


@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) id *streamAcceptHandler; // ivar: _streamAcceptHandler
@property (nonatomic) unsigned int streamFlags; // ivar: _streamFlags
@property (copy, nonatomic) id *streamPrepareHandler; // ivar: _streamPrepareHandler
@property (copy, nonatomic) id *streamPrepareHandlerEx; // ivar: _streamPrepareHandlerEx
@property (nonatomic) int streamQoS; // ivar: _streamQoS


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_handleStartRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleStopRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif