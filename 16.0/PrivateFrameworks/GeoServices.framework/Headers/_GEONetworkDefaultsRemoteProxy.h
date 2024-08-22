// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEONETWORKDEFAULTSREMOTEPROXY_H
#define _GEONETWORKDEFAULTSREMOTEPROXY_H

@class geo_isolater, NSMutableArray, NSString;
@protocol _GEONetworkDefaultsServerProxy, _GEONetworkDefaultsServerProxyDelegate;

#import <Foundation/Foundation.h>


@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy>

 {
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_GEONetworkDefaultsServerProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_networkDefaultsDidChange;
-(void)dealloc;
-(void)updateNetworkDefaults:(id)arg0 ;
-(void)updateNetworkDefaultsWithReason:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif