// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTHUMBNAILGENERATOR_H
#define CAMTHUMBNAILGENERATOR_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMThumbnailGenerator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue; // ivar: __generationQueue
@property (readonly, nonatomic) *OpaqueVTPixelTransferSession _generationQueuePixelTransferSession; // ivar: __generationQueuePixelTransferSession
@property (readonly, nonatomic) NSMapTable *_generationQueueRotationSessionsMapTable; // ivar: __generationQueueRotationSessionsMapTable


-(id)_neededColorspacePropertiesFromMetadata:(id)arg0 ;
-(id)init;
-(id)newJPEGDataInOrientation:(NSInteger)arg0 usingPixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)newJPEGDataInOrientation:(NSInteger)arg0 usingSurface:(*void)arg1 withMetadata:(id)arg2 ;
-(id)newJPEGDataOfFormat:(NSInteger)arg0 inOrientation:(NSInteger)arg1 usingSurface:(*void)arg2 withMetadata:(id)arg3 ;
-(struct CGImage *)newBGRAImageInOrientation:(NSInteger)arg0 usingPixelBuffer:(struct __CVBuffer *)arg1 ;
-(struct CGImage *)newBGRAImageInOrientation:(NSInteger)arg0 usingSurface:(*void)arg1 ;
-(struct CGImage *)newBGRAImageOfFormat:(NSInteger)arg0 inOrientation:(NSInteger)arg1 usingPixelBuffer:(struct __CVBuffer *)arg2 ;
-(struct CGImage *)newBGRAImageOfFormat:(NSInteger)arg0 inOrientation:(NSInteger)arg1 usingSurface:(*void)arg2 ;
-(struct __CVBuffer *)_newRotatedPixelBuffer:(struct __CVBuffer *)arg0 withOrientation:(NSInteger)arg1 ;
-(struct __CVBuffer *)_newThumbnailOfFormat:(NSInteger)arg0 inOrientation:(NSInteger)arg1 withPixelFormat:(unsigned int)arg2 usingPixelBuffer:(struct __CVBuffer *)arg3 ;
-(struct __CVBuffer *)_newThumbnailOfSize:(struct CGSize )arg0 inOrientation:(NSInteger)arg1 withPixelFormat:(unsigned int)arg2 usingPixelBuffer:(struct __CVBuffer *)arg3 ;
-(void)dealloc;


@end


#endif