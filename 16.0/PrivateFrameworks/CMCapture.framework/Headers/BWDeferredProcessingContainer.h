// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDPROCESSINGCONTAINER_H
#define BWDEFERREDPROCESSINGCONTAINER_H

@protocol OS_dispatch_queue;


#import "BWDeferredContainer.h"
#import "BWPhotoManifest.h"

@interface BWDeferredProcessingContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_metadataPrefetchQueue;
    NSObject<OS_dispatch_queue> *_bufferPrefetchQueue;
}


@property (readonly, nonatomic) unsigned int ageSeconds; // ivar: _ageSeconds
@property (readonly, nonatomic) BOOL isRemote; // ivar: _isRemote
@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) unsigned int processingCount; // ivar: _processingCount
@property (readonly, nonatomic) NSUInteger sizeBytes; // ivar: _sizeBytes


-(BOOL)hasBufferForType:(NSUInteger)arg0 portType:(id)arg1 ;
-(BOOL)hasInference:(id)arg0 portType:(id)arg1 ;
-(BOOL)hasInferenceBuffer:(id)arg0 portType:(id)arg1 ;
-(id)copyArrayForTag:(id)arg0 customClasses:(id)arg1 err:(*int)arg2 ;
-(id)copyAttributesForBufferType:(NSUInteger)arg0 portType:(id)arg1 err:(*int)arg2 ;
-(id)copyBuffersForType:(NSUInteger)arg0 portType:(id)arg1 metadataArray:(*id)arg2 err:(*int)arg3 ;
-(id)copyDictionaryForTag:(id)arg0 err:(*int)arg1 ;
-(id)copyInferenceForKey:(id)arg0 customClasses:(id)arg1 portType:(id)arg2 err:(*int)arg3 ;
-(id)copyMetadataForBufferTag:(id)arg0 err:(*int)arg1 ;
-(id)copyMetadataForTag:(id)arg0 err:(*int)arg1 ;
-(id)initWithApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 baseFolderURL:(id)arg2 openForPeeking:(BOOL)arg3 err:(*int)arg4 ;
-(id)initWithXPCEncoding:(id)arg0 applicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 err:(*int)arg4 ;
-(struct __CVBuffer *)copyBufferForTag:(id)arg0 err:(*int)arg1 ;
-(struct __CVBuffer *)copyBufferForType:(NSUInteger)arg0 portType:(id)arg1 metadata:(*id)arg2 err:(*int)arg3 ;
-(struct __CVBuffer *)copyInferenceBufferForKey:(id)arg0 portType:(id)arg1 err:(*int)arg2 ;
-(void)dealloc;
-(void)releaseIntermediates;


@end


#endif