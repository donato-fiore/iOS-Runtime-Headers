// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSASYNCPROXYCLIENT_H
#define OSASYNCPROXYCLIENT_H

@class NSXPCConnection, NSString;
@protocol OSASyncProxyServices;

#import <Foundation/Foundation.h>


@interface OSASyncProxyClient : NSObject <OSASyncProxyServices>

 {
    NSXPCConnection *_connection;
    id<OSASyncProxyServices> *_synchRemoteObjectProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)deliver:(id)arg0 tasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3 ;
-(void)listDevices:(id)arg0 ;
-(void)request:(id)arg0 logList:(id)arg1 ;
-(void)request:(id)arg0 logListWithOptions:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferGroupWithOptions:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferLog:(id)arg1 onComplete:(id)arg2 ;
-(void)request:(id)arg0 transferLog:(id)arg1 withOptions:(id)arg2 onComplete:(id)arg3 ;
-(void)requestProxyMetadata:(id)arg0 onComplete:(id)arg1 ;
-(void)synchronize:(id)arg0 withOptions:(id)arg1 onComplete:(id)arg2 ;


@end


#endif