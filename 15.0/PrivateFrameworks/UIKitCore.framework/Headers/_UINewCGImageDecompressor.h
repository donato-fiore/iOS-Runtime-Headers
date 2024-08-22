// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINEWCGIMAGEDECOMPRESSOR_H
#define _UINEWCGIMAGEDECOMPRESSOR_H

@class UICGImageDecompressor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;



@interface _UINewCGImageDecompressor : UICGImageDecompressor {
    *CMPhotoDecompressionContainer _container;
    id *_imageOrError;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_semaphore> *_sema;
    os_unfair_lock_s _stateLock;
    ? _flags;
}




+(struct CMPhotoDecompressionSession *)_sharedDecompressionSession;
-(id)init;
-(struct CGImage *)waitForImageRef;
-(void)_finishDecompressingWithImage:(struct CGImage *)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif