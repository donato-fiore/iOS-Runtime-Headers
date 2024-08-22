// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOLOCATIONSHIFTLOCATION_H
#define _GEOLOCATIONSHIFTLOCATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOLatLng.h"

@interface _GEOLocationShiftLocation : NSObject {
    id *_completionHandler;
    id *_errorHandler;
    id *_mustGoToNetworkCallback;
    id *_functionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) GEOLatLng *latLng; // ivar: _latLng


// -(id)_initWithLatLng:(id)arg0 accuracy:(CGFloat)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 errorHandler:(unk)arg4 mustGoToNetworkCallback:(id)arg5  ;
// -(id)initWithLatLng:(id)arg0 accuracy:(CGFloat)arg1 completionHandler:(id)arg2 errorHandler:(unk)arg3 mustGoToNetworkCallback:(id)arg4 callbackQueue:(unk)arg5  ;
// -(id)initWithLatLng:(id)arg0 accuracy:(CGFloat)arg1 completionHandler:(id)arg2 errorHandler:(unk)arg3 mustGoToNetworkCallback:(id)arg4 callbackQueue:(unk)arg5 auditToken:(id)arg6  ;
// -(id)initWithLatLng:(id)arg0 auditToken:(id)arg1 functionHandler:(id)arg2 errorHandler:(unk)arg3 callbackQueue:(id)arg4  ;
-(void)_performOnCallbackQueue:(id)arg0 ;
-(void)performCompletionHandlerWithShiftedCoordinate:(struct ? )arg0 accuracy:(CGFloat)arg1 function:(id)arg2 ;
-(void)performErrorHandler:(id)arg0 ;
-(void)performMustGoToNetwork;


@end


#endif