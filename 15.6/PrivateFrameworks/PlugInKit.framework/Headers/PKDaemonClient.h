// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDAEMONCLIENT_H
#define PKDAEMONCLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKDaemonClient : NSObject

@property (retain) NSObject<OS_xpc_object> *pkd; // ivar: _pkd
@property NSInteger protocolVersion; // ivar: _protocolVersion
@property (retain) NSObject<OS_dispatch_queue> *replyQueue; // ivar: _replyQueue


+(id)convertToXPC:(id)arg0 version:(NSUInteger)arg1 ;
-(id)convertFromXPC:(id)arg0 ;
-(id)errorInReply:(id)arg0 ;
-(id)initWithServiceName:(char *)arg0 ;
-(id)initWithServiceName:(char *)arg0 user:(unsigned int)arg1 ;
-(id)request:(char *)arg0 ;
-(id)request:(char *)arg0 paths:(id)arg1 ;
-(void)accessPlugIns:(id)arg0 synchronously:(BOOL)arg1 flags:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)addPlugIns:(id)arg0 reply:(id)arg1 ;
-(void)bulkPlugins:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)bulkSetPluginAnnotations:(id)arg0 reply:(id)arg1 ;
-(void)copyReceipt:(id)arg0 ;
-(void)findPlugInByPathURL:(id)arg0 reply:(id)arg1 ;
-(void)findPlugInByUUID:(id)arg0 reply:(id)arg1 ;
-(void)holdPlugins:(id)arg0 extensionPointName:(id)arg1 platforms:(id)arg2 flags:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)matchPlugIns:(id)arg0 flags:(NSUInteger)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)readyPlugIns:(id)arg0 synchronously:(BOOL)arg1 flags:(NSUInteger)arg2 environment:(id)arg3 languages:(id)arg4 reply:(id)arg5 ;
-(void)releaseHold:(id)arg0 flags:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)removePlugIns:(id)arg0 reply:(id)arg1 ;
-(void)send:(id)arg0 reply:(id)arg1 ;
-(void)sendSynchronously:(BOOL)arg0 request:(id)arg1 reply:(id)arg2 ;
-(void)sendSynchronously:(BOOL)arg0 request:(id)arg1 retry:(BOOL)arg2 reply:(id)arg3 ;
-(void)set:(id)arg0 plugins:(id)arg1 ;
-(void)set:(id)arg0 uuids:(id)arg1 ;
-(void)setPluginAnnotations:(id)arg0 annotations:(id)arg1 reply:(id)arg2 ;


@end


#endif