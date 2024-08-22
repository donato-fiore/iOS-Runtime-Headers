// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMESCALSESSION_H
#define AMSMESCALSESSION_H

@class NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"
#import "AMSMescalFairPlay.h"

@interface AMSMescalSession : NSObject {
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    NSInteger _mescalType;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(id)defaultSession;
+(id)primeSession;
+(id)sessionWithType:(NSInteger)arg0 ;
-(BOOL)_cacheCertData:(id)arg0 expiration:(CGFloat)arg1 ;
-(BOOL)_shouldRetryFairPlayForError:(id)arg0 ;
-(BOOL)_verifyEntitlements;
-(BOOL)verifyData:(id)arg0 withSignature:(id)arg1 bag:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyPrimeSignature:(id)arg0 error:(*id)arg1 ;
-(id)_cachedCertData;
-(id)_cachedCertPath;
-(id)_establishContextWithBag:(id)arg0 error:(*id)arg1 ;
-(id)_loadCertificateDataWithBag:(id)arg0 error:(*id)arg1 ;
-(id)_postExchangeData:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)primeSignatureForData:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
-(id)signData:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
-(void)_resetSession;


@end


#endif