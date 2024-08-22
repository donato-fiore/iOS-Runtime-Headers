// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONICONGENERATOR_H
#define PKPAYMENTTRANSACTIONICONGENERATOR_H

@class NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, PKObjectDownloader, PKPaymentService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionIconGenerator : NSObject {
    NSMutableDictionary *_iconCache;
    NSMutableArray *_iconCacheKeys;
    BOOL _useCache;
    BOOL _hasNetworkAccess;
    CGFloat _scale;
    NSMutableOrderedSet *_highPriorityIconRequests;
    NSMutableOrderedSet *_lowPriorityIconRequests;
    NSMutableArray *_inflightRequests;
    BOOL _processingRequest;
    NSObject<OS_dispatch_queue> *_queueIcons;
    os_unfair_lock_s _lockRequests;
    PKObjectDownloader *_fileDownloader;
    PKPaymentService *_paymentService;
}




-(id)_cacheImageFromDownloaderCacheForURL:(id)arg0 ;
-(id)_iconCacheKeyForMerchant:(id)arg0 size:(struct CGSize )arg1 ignoreLogoURL:(BOOL)arg2 imageOut:(*id)arg3 ;
-(id)_iconCacheKeyForPaymentTransaction:(id)arg0 size:(struct CGSize )arg1 ignoreLogoURL:(BOOL)arg2 imageOut:(*id)arg3 ;
-(id)_iconForCacheKey:(id)arg0 ;
-(id)_iconForTransaction:(id)arg0 merchant:(id)arg1 size:(struct CGSize )arg2 ignoreLogoURL:(BOOL)arg3 requestType:(NSUInteger)arg4 iconHandler:(id)arg5 ;
-(id)fileDownloader;
-(id)iconCacheKeyForTransaction:(id)arg0 size:(struct CGSize )arg1 ;
-(id)iconForMerchant:(id)arg0 size:(struct CGSize )arg1 ignoreLogoURL:(BOOL)arg2 requestType:(NSUInteger)arg3 iconHandler:(id)arg4 ;
-(id)iconForTransaction:(id)arg0 size:(struct CGSize )arg1 ignoreLogoURL:(BOOL)arg2 requestType:(NSUInteger)arg3 iconHandler:(id)arg4 ;
-(id)initWithCache:(BOOL)arg0 scale:(CGFloat)arg1 ;
-(void)_downloadLogoForURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)queue_processNextIconRequest;


@end


#endif