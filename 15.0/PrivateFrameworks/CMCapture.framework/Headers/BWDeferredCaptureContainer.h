// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDCAPTURECONTAINER_H
#define BWDEFERREDCAPTURECONTAINER_H

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_group;


#import "BWDeferredContainer.h"

@interface BWDeferredCaptureContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_group> *_flushGroup;
    BOOL _flushBuffersUponCommit;
    BOOL _foldersCreated;
    BOOL _preflushed;
    NSDate *_commitTime;
}


@property (nonatomic) NSUInteger cacheExpiryTime; // ivar: _cacheExpiryTime
@property (nonatomic) BOOL cached; // ivar: _cached
@property (readonly, nonatomic) NSInteger commitDurationNS; // ivar: _commitDurationNS
@property (readonly, nonatomic) BOOL committed; // ivar: _committed
@property (readonly, nonatomic) NSInteger flushDurationNS; // ivar: _flushDurationNS


+(id)captureRequestIdentifierForManifest:(id)arg0 ;
+(id)timeForManifest:(id)arg0 index:(NSUInteger)arg1 ;
-(id)copyXPCEncoding:(*int)arg0 ;
-(id)initWithApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 baseFolderURL:(id)arg2 flushBuffersUponCommit:(BOOL)arg3 err:(*int)arg4 ;
-(int)abort;
-(int)commit;
-(int)commitArray:(id)arg0 tag:(id)arg1 ;
-(int)commitBuffer:(struct __CVBuffer *)arg0 tag:(id)arg1 bufferType:(NSUInteger)arg2 compressionProfile:(int)arg3 metadataTag:(id)arg4 portType:(id)arg5 ;
-(int)commitCaptureSettings:(id)arg0 settings:(id)arg1 ;
-(int)commitDictionary:(id)arg0 tag:(id)arg1 ;
-(int)commitMetadata:(id)arg0 tag:(id)arg1 bufferTag:(id)arg2 ;
-(int)commitPhotoDescriptor:(id)arg0 ;
-(int)flush;
-(int)preflush;
-(int)waitForFlush;
-(void)dealloc;


@end


#endif