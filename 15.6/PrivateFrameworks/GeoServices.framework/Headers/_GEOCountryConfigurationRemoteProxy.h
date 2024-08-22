// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOCOUNTRYCONFIGURATIONREMOTEPROXY_H
#define _GEOCOUNTRYCONFIGURATIONREMOTEPROXY_H

@class NSString;
@protocol _GEOCountryConfigurationServerProxy, OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

#import <Foundation/Foundation.h>


@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _providersChangedToken;
    id *_countryCodeChangeListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)dealloc;
-(void)updateCountryCodeWithCallbackQueue:(id)arg0 callback:(id)arg1 ;


@end


#endif