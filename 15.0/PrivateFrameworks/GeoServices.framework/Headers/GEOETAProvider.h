// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOETAPROVIDER_H
#define GEOETAPROVIDER_H

@class NSString;
@protocol GEOProtobufSessionTaskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOMapServiceTraits.h"
#import "GEOETATrafficUpdateRequest.h"
#import "GEOProtobufSession.h"
#import "GEOProtobufSessionTask.h"

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate>

 {
    GEOApplicationAuditToken *_auditToken;
    GEOMapServiceTraits *_traits;
    BOOL _cancelled;
    GEOOnce_s _didStart;
}


@property (retain) GEOETATrafficUpdateRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *finishedHandler; // ivar: _finishedHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (readonly, nonatomic) GEOProtobufSession *protobufSession; // ivar: _protobufSession
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOProtobufSessionTask *task; // ivar: _task
@property (copy, nonatomic) id *willSendRequestHandler; // ivar: _willSendRequestHandler


-(id)init;
-(id)initWithAuditToken:(id)arg0 traits:(id)arg1 ;
-(id)protobufSession:(id)arg0 validateResponse:(id)arg1 ;
// -(void)_startRequest:(id)arg0 connectionProperties:(id)arg1 willSendRequest:(id)arg2 finished:(unk)arg3 error:(id)arg4  ;
-(void)cancelRequest;
-(void)didCompleteTask;
-(void)protobufSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)protobufSession:(id)arg0 willSendRequest:(id)arg1 forTask:(id)arg2 completionHandler:(id)arg3 ;
// -(void)startRequest:(id)arg0 connectionProperties:(id)arg1 willSendRequest:(id)arg2 finished:(unk)arg3 error:(id)arg4  ;
// -(void)startRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;
// -(void)updateRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;


@end


#endif