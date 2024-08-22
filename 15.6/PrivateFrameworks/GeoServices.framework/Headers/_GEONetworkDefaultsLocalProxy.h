// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEONETWORKDEFAULTSLOCALPROXY_H
#define _GEONETWORKDEFAULTSLOCALPROXY_H

@class geo_isolater, NSMutableArray, NSDate, NSString;
@protocol _GEONetworkDefaultsServerProxy, GEOPListStateCapturing, _GEONetworkDefaultsServerProxyDelegate;

#import <Foundation/Foundation.h>


@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing>

 {
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    NSUInteger _stateCaptureHandle;
    NSDate *_lastNetworkFailure;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_GEONetworkDefaultsServerProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_urlRequestForNetworkDefaults;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(void)_callCompletionHandlersWithError:(id)arg0 ;
-(void)_processNetworkDefaultsResponse:(id)arg0 data:(id)arg1 error:(id)arg2 request:(id)arg3 ;
-(void)_updateNetworkDefaults;
-(void)_updateWithNewConfig:(id)arg0 request:(id)arg1 response:(id)arg2 ;
-(void)updateNetworkDefaults:(id)arg0 ;
-(void)updateNetworkDefaultsWithReason:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif