// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMIMAGEDISKCACHE_H
#define IMIMAGEDISKCACHE_H

@class NSMutableDictionary, NSString, NSMutableSet, NSRecursiveLock;
@protocol OS_dispatch_queue;


#import "IMBaseDiskCache.h"

@interface IMImageDiskCache : IMBaseDiskCache

@property (readonly, nonatomic) NSMutableDictionary *completionHandlers; // ivar: _completionHandlers
@property (readonly, nonatomic) CGFloat maxImageDimensionInPixels; // ivar: _maxImageDimensionInPixels
@property (readonly, nonatomic) NSString *onDiskFileType; // ivar: _onDiskFileType
@property (readonly, nonatomic) NSMutableDictionary *pendingPerformWhenAvailableOnDiskBlocks; // ivar: _pendingPerformWhenAvailableOnDiskBlocks
@property (readonly, nonatomic) NSMutableSet *proccessingKeys; // ivar: _proccessingKeys
@property (readonly, nonatomic) CGFloat saveCompressionQuality; // ivar: _saveCompressionQuality
@property (readonly, nonatomic) NSRecursiveLock *syncLock; // ivar: _syncLock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)_addImage:(id)arg0 forKey:(id)arg1 resizeIfTooBig:(BOOL)arg2 manageProcessingState:(BOOL)arg3 completion:(id)arg4 ;
-(BOOL)_isProcessingKey:(id)arg0 completion:(id)arg1 ;
-(BOOL)_needsResizing:(struct CGImageSource *)arg0 maxDimensionInPixels:(CGFloat)arg1 ;
-(BOOL)_startProcessingForAddingKey:(id)arg0 originalKey:(id)arg1 ;
-(BOOL)_usesLessMemoryToConvertThenResizeImageSource:(struct CGImageSource *)arg0 destinationDimensionInPixels:(CGFloat)arg1 ;
-(BOOL)addImage:(id)arg0 forKey:(id)arg1 ;
-(BOOL)copyImageFromSourceUrl:(id)arg0 sourceFileType:(id)arg1 to:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(CGFloat)arg5 ;
-(id)_defaultImageSavingOptions;
-(id)_defaultImageSavingSourceOptions;
-(id)_onDiskFileExtension;
-(id)_resizeImageForKey:(id)arg0 maxDimensionInPixels:(CGFloat)arg1 ;
-(id)imageForKey:(id)arg0 ;
-(id)imageUrlForKey:(id)arg0 ;
-(id)initWithBasePath:(id)arg0 ;
-(id)initWithBasePath:(id)arg0 maxImageDimensionInPixels:(CGFloat)arg1 ;
-(id)pathForKey:(id)arg0 ;
-(struct CGImageSource *)_copyImageSourceByConvertingImage:(struct CGImageSource *)arg0 toFileType:(id)arg1 destinationUrl:(id)arg2 ;
-(void)_addImageWithSourceUrl:(id)arg0 forKey:(id)arg1 discardTransparency:(BOOL)arg2 enforceSquare:(BOOL)arg3 maxDimensionInPixels:(CGFloat)arg4 completion:(id)arg5 ;
-(void)_finishProcessingKey:(id)arg0 success:(BOOL)arg1 ;
-(void)_performWithSyncLock:(id)arg0 ;
-(void)_startProcessingKey:(id)arg0 completion:(id)arg1 ;
-(void)addImageWithSourceUrl:(id)arg0 forKey:(id)arg1 discardTransparency:(BOOL)arg2 enforceSquare:(BOOL)arg3 maxDimensionInPixels:(CGFloat)arg4 completion:(id)arg5 ;
-(void)addImageWithSourceUrl:(id)arg0 forKey:(id)arg1 enforceSquare:(BOOL)arg2 maxDimensionInPixels:(CGFloat)arg3 completion:(id)arg4 ;
-(void)addImagesWithSourceUrl:(id)arg0 forKeys:(id)arg1 discardTransparency:(BOOL)arg2 enforceSquare:(BOOL)arg3 completion:(id)arg4 ;
-(void)copyImageFromSourceUrl:(id)arg0 to:(id)arg1 discardTransparency:(BOOL)arg2 enforceSquare:(BOOL)arg3 maxDimensionInPixels:(CGFloat)arg4 completion:(id)arg5 ;
-(void)performWhenURLAvailableForImageForKey:(id)arg0 block:(id)arg1 ;


@end


#endif