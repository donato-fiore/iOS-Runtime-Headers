// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICEASSETTASK_H
#define SFDEVICEASSETTASK_H

@class NSBundle, NSMutableArray, NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SFDeviceAssetRequestConfiguration.h"
#import "SFDeviceAssetQuery.h"

@interface SFDeviceAssetTask : NSObject

@property (readonly, nonatomic) NSBundle *cachedBundle; // ivar: _cachedBundle
@property (readonly, nonatomic) SFDeviceAssetRequestConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // ivar: _deviceAssetQuery
@property (readonly, nonatomic) NSMutableArray *deviceQueryParameters; // ivar: _deviceQueryParameters
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL downloadCompletionCalled; // ivar: _downloadCompletionCalled
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSBundle *fallbackBundle; // ivar: _fallbackBundle
@property (readonly, nonatomic) NSBundle *imperfectMatchBundle; // ivar: _imperfectMatchBundle
@property (readonly, nonatomic) NSBundle *matchBundle; // ivar: _matchBundle
@property (nonatomic) BOOL queryResultCalled; // ivar: _queryResultCalled
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (readonly, nonatomic) BOOL useProcessLocalCache; // ivar: _useProcessLocalCache


-(BOOL)completeIfPossible;
-(BOOL)updateTaskWithAssetBundleURL:(id)arg0 error:(id)arg1 isFallback:(BOOL)arg2 isImperfectMatch:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(BOOL)updateTaskWithAssetURL:(id)arg0 error:(id)arg1 isFallback:(BOOL)arg2 isImperfectMatch:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(BOOL)updateTaskWithBundle:(id)arg0 error:(id)arg1 isFallback:(BOOL)arg2 isImperfectMatch:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(id)bundleAtURL:(id)arg0 error:(*id)arg1 ;
-(id)bundleURLFromAssetURL:(id)arg0 ;
-(id)initWithDeviceQuery:(id)arg0 requestConfiguration:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(BOOL)arg3 ;
-(void)cancelTimeout;
-(void)completeWithBundle:(id)arg0 isFallback:(BOOL)arg1 isCached:(BOOL)arg2 ;
-(void)createQueryParameters;


@end


#endif