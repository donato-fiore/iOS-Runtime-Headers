// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSSHAREDMEMORYSTORE_H
#define BSSHAREDMEMORYSTORE_H

@class NSString;
@protocol OS_dispatch_queue, BSSharedMemoryStoreData;

#import <Foundation/Foundation.h>


@interface BSSharedMemoryStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_basePath;
    ? _queue_path;
    id<BSSharedMemoryStoreData> *_queue_data;
    unsigned char _queue_lastState;
    unsigned char _queue_nextWriteFailure;
    BOOL _queue_writeFailedOnce;
    BOOL _queue_invalidated;
}


@property (readonly, nonatomic) unsigned char _lastState;
@property (copy, nonatomic) NSObject<BSSharedMemoryStoreData> *data;


+(id)deserializeDataOfClass:(Class)arg0 withSerializedFromData:(id)arg1 ;
+(void)_unlinkAllForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 dataClass:(Class)arg1 ;
-(void)_setFailureModeForNextWrite:(unsigned char)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif