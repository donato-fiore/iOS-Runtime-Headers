// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEFERREDMETADATACACHE_H
#define BWDEFERREDMETADATACACHE_H


#import <Foundation/Foundation.h>

#import "BWFigCaptureStream.h"

@interface BWDeferredMetadataCache : NSObject {
    *OpaqueFigSimpleMutex _lock;
    BWFigCaptureStream *_stream;
    int _numberOfExpectedSampleBuffersForEachPTS;
    BWDeferredMetadataCacheEntry _cache;
}


@property (nonatomic) int numberOfExpectedSampleBuffersForEachPTS;


-(id)initWithCaptureStream:(id)arg0 atomicTransactions:(BOOL)arg1 ;
-(void)addMetadataAttachmentToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withDutyCycleMetadataCache:(id)arg1 ;
-(void)dealloc;
-(void)flush;


@end


#endif