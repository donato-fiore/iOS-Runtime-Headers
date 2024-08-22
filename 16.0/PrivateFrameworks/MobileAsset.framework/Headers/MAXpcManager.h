// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAXPCMANAGER_H
#define MAXPCMANAGER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MAXpcConnection.h"

@interface MAXpcManager : NSObject {
    MAXpcConnection *_maConnection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSString *_serviceName;
    NSMutableDictionary *_progressHandlers;
}




-(id)initWithServiceName:(id)arg0 callbackQueue:(id)arg1 ;
-(id)sendSync:(id)arg0 gettingResponseCode:(*NSInteger)arg1 codeForXpcError:(NSInteger)arg2 loggingName:(id)arg3 ;
// -(void)attachProgressHandler:(id)arg0 assetId:(id)arg1 callBack:(id)arg2 withPurpose:(unk)arg3  ;
-(void)clearConnection:(id)arg0 ;
-(void)ensureConnection;
-(void)notifyClientsOfProgress:(id)arg0 ;
// -(void)sendAsync:(id)arg0 clientHandler:(id)arg1 taskDescriptor:(unk)arg2  ;
// -(void)sendAsync:(id)arg0 clientHandler:(id)arg1 taskDescriptor:(unk)arg2 withRetry:(id)arg3  ;
-(void)setClientConnectionHandler;
-(void)setClientName:(id)arg0 ;


@end


#endif