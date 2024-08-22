// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRSECURECHANNEL_H
#define SPRSECURECHANNEL_H


#import <Foundation/Foundation.h>


@interface SPRSecureChannel : NSObject {
    ? endpointTimeToken;
    ? signer;
    ? secureTime;
    ? dispatchQueue;
    ? $__lazy_storage_$_delegateQueue;
    ? $__lazy_storage_$_sessionConfiguration;
    ? sessionDelegate;
    ? _session;
}




+(id)serverResponseBody;
+(id)serverResponseHeader;
-(BOOL)startSessionAsyncWithRequest:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithServer:(id)arg0 persist:(id)arg1 error:(*id)arg2 ;
-(id)startDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)startDownloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)startSessionWithRequest:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif