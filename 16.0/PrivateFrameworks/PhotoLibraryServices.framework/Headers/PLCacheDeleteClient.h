// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCACHEDELETECLIENT_H
#define PLCACHEDELETECLIENT_H

@class NSString, NSByteCountFormatter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLCacheDeleteClient : NSObject {
    NSString *_cachedVolume;
}


@property (readonly, nonatomic) NSByteCountFormatter *byteFormatter; // ivar: _byteFormatter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDeleteQueryQueue; // ivar: _cacheDeleteQueryQueue
@property (readonly, nonatomic) NSString *cacheDeleteVolume;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) *CacheDeleteToken currentCacheDeletePurgeToken; // ivar: _currentCacheDeletePurgeToken
@property (readonly, nonatomic) NSString *pathForVolume; // ivar: _pathForVolume


+(BOOL)hasEntitlementsForCacheDelete;
-(id)initWithQoSClass:(unsigned int)arg0 pathForVolume:(id)arg1 callbackQueue:(id)arg2 ;
-(struct ? )_queryAvailableSpace;
// -(void)_notifyDiskAvailabilityRequestCompletionHandler:(id)arg0 withSuccess:(unk)arg1 numBytesPurged:(BOOL)arg2 additionalBytesRequired:(NSInteger)arg3 error:(NSInteger)arg4  ;
-(void)cancelDiskSpaceAvailabilityRequest;
-(void)requestDiskSpaceAvailabilityOfSize:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif