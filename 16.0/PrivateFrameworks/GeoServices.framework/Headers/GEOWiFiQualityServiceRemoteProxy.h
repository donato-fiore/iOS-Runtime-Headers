// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFIQUALITYSERVICEREMOTEPROXY_H
#define GEOWIFIQUALITYSERVICEREMOTEPROXY_H

@class NSString;
@protocol GEOWiFiQualityServiceProxy;

#import <Foundation/Foundation.h>


@interface GEOWiFiQualityServiceRemoteProxy : NSObject <GEOWiFiQualityServiceProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancelRequestId:(id)arg0 ;
-(void)submitWiFiQualityServiceRequest:(id)arg0 requestId:(id)arg1 auditToken:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)submitWiFiQualityTileLoadForKey:(id)arg0 eTag:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(id)arg5 ;


@end


#endif