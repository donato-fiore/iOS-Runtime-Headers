// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSERVICEREQUESTEROPERATION_H
#define GEOSERVICEREQUESTEROPERATION_H

@class PBRequest, NSString, NSURL;
@protocol GEOProtobufSessionTaskDelegate, GEOServiceRequesterOperation, GEOServiceRequestConfiguring;

#import <Foundation/Foundation.h>

#import "GEOProtobufSessionTask.h"
#import "GEOApplicationAuditToken.h"
#import "GEOMapServiceTraits.h"
#import "GEODataRequestThrottlerToken.h"

@interface GEOServiceRequesterOperation : NSObject <GEOProtobufSessionTaskDelegate, GEOServiceRequesterOperation>

 {
    GEOProtobufSessionTask *_task;
    BOOL _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id *_willSendRequestHandler;
    id *_validationHandler;
    id *_completionHandler;
    NSURL *_url;
    id<GEOServiceRequestConfiguring> *_config;
    NSString *_appIdentifier;
    GEOApplicationAuditToken *_auditToken;
    ? _dataRequestKind;
    GEOMapServiceTraits *_traits;
    CGFloat _timeout;
    GEODataRequestThrottlerToken *_throttleToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fullURL;
// -(id)initWithRequest:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 config:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(id)arg5 validationHandler:(unk)arg6 completionHandler:(id)arg7  ;
-(id)protobufSession:(id)arg0 validateResponse:(id)arg1 ;
-(void)_captureNetworkEventForTask;
-(void)_cleanup;
-(void)cancel;
-(void)dealloc;
-(void)protobufSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)protobufSession:(id)arg0 willSendRequest:(id)arg1 forTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)start;


@end


#endif