// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEODIRECTIONSREQUESTERSERVERREMOTEPROXY_H
#define _GEODIRECTIONSREQUESTERSERVERREMOTEPROXY_H

@class geo_isolater, NSMapTable, NSString;
@protocol _GEODirectionsRequesterServerProxy;

#import <Foundation/Foundation.h>


@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy>

 {
    geo_isolater *_isolater;
    NSMapTable *_pendingRequestConnections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_takeConnectionForRequest:(id)arg0 ;
-(id)init;
-(void)cancelRequest:(id)arg0 ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 useBackgroundURL:(BOOL)arg2 requestPriority:(id)arg3 callbackQueue:(id)arg4 finished:(id)arg5 networkActivity:(unk)arg6 error:(id)arg7  ;


@end


#endif