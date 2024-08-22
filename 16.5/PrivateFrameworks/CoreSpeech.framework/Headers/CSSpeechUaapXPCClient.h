// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSPEECHUAAPXPCCLIENT_H
#define CSSPEECHUAAPXPCCLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSpeechUaapXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_handleConnectionError:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)registerDatapackUpdate;
-(void)registerMultilingualUaapApp:(id)arg0 withAssetFiles:(id)arg1 completion:(id)arg2 ;
-(void)registerUaapApp:(id)arg0 forLocale:(id)arg1 withAssetFiles:(id)arg2 completion:(id)arg3 ;
-(void)registerUaapApp:(id)arg0 withAssetFiles:(id)arg1 completion:(id)arg2 ;


@end


#endif