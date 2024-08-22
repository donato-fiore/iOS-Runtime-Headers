// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETCUSTOMURLAUTHENTICATION_H
#define AVASSETCUSTOMURLAUTHENTICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVAssetCustomURLAuthentication : NSObject {
    *OpaqueFigCustomURLHandler _handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




+(id)copyKeychainCredentialForUrl:(id)arg0 ;
+(int)sendAuthResponse:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 disposition:(NSInteger)arg2 credential:(id)arg3 authHandler:(struct OpaqueFigCustomURLHandler *)arg4 ;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(int)_handleAuthChallenge:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 canHandleRequestOut:(char *)arg2 ;
-(void)dealloc;


@end


#endif