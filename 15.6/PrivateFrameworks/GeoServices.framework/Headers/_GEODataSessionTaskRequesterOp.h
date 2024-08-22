// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEODATASESSIONTASKREQUESTEROP_H
#define _GEODATASESSIONTASKREQUESTEROP_H

@class PBRequest, NSString;
@protocol GEOProtobufSessionTaskDelegate, GEOServiceRequestConfiguring;

#import <Foundation/Foundation.h>

#import "GEOProtobufSessionTask.h"
#import "GEOApplicationAuditToken.h"
#import "GEOMapServiceTraits.h"
#import "GEODataRequestThrottlerToken.h"

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate>

 {
    GEOProtobufSessionTask *_task;
    BOOL _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id *_completionHandler;
    id *_validationHandler;
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
-(id)_userInfoForTask:(id)arg0 ;
-(id)initWithRequest:(id)arg0 auditToken:(id)arg1 config:(id)arg2 timeout:(CGFloat)arg3 dataRequestKind:(struct ? )arg4 traits:(id)arg5 throttleToken:(id)arg6 ;
-(id)protobufSession:(id)arg0 validateResponse:(id)arg1 ;
-(void)_cleanup;
-(void)cancel;
-(void)dealloc;
-(void)protobufSession:(id)arg0 didCompleteTask:(id)arg1 ;
// -(void)startWithValidationHandler:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif