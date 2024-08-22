// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAABSINTHESIGNER_H
#define AAABSINTHESIGNER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AAAbsintheSignerContextCache.h"
#import "AAAbsintheContext.h"
#import "AAURLSession.h"

@interface AAAbsintheSigner : NSObject {
    os_unfair_lock_s _contextLock;
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSObject<OS_dispatch_source> *_contextTimerSource;
    AAAbsintheSignerContextCache *_contextCache;
}


@property (readonly, nonatomic) CGFloat cacheTimeout; // ivar: _cacheTimeout
@property (readonly, nonatomic) AAAbsintheContext *context;
@property (retain, nonatomic) AAURLSession *session; // ivar: _session


+(id)sharedSigner;
-(id)init;
-(id)initWithCacheTimeout:(CGFloat)arg0 ;
-(void)_contextQueue_contextWithCompletion:(id)arg0 ;
-(void)_contextWithCompletion:(id)arg0 ;
-(void)_fetchCertificateDataWithCompletion:(id)arg0 ;
-(void)_fetchSessionInfoWithRequestInfo:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)signatureForData:(id)arg0 completion:(id)arg1 ;


@end


#endif