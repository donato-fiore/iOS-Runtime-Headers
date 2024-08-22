// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMIMAGESTORE_H
#define IMIMAGESTORE_H

@class NSString, NSOperationQueue;
@protocol IMCache;

#import <Foundation/Foundation.h>

#import "IMImageDiskCache.h"
#import "IMMemoryCache.h"

@interface IMImageStore : NSObject <IMCache>



@property (copy, nonatomic) id *alternativeSize; // ivar: _alternativeSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableMemoryCache;
@property (readonly, nonatomic) IMImageDiskCache *diskCache; // ivar: _diskCache
@property (retain, nonatomic) NSOperationQueue *fetchOperationQueue; // ivar: _fetchOperationQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxImageDimensionInPixels; // ivar: _maxImageDimensionInPixels
@property (readonly, nonatomic) IMMemoryCache *memoryCache; // ivar: _memoryCache
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(CGFloat)defaultMaxImageDimensionInPixels;
+(NSUInteger)_memorySize;
+(NSUInteger)defaultMaxConcurrentOperations;
+(id)defaultAlternativeSizeBlock:(SEL)arg0 ;
+(id)defaultBasePath;
+(id)defaultName;
+(id)defaultStore;
+(int)defaultImageResizeOptions;
-(BOOL)hasItemForKey:(id)arg0 ;
-(BOOL)hasItemForKey:(id)arg0 size:(struct CGSize )arg1 ;
-(BOOL)hasItemForKey:(id)arg0 size:(struct CGSize )arg1 modifier:(id)arg2 ;
-(BOOL)isEmpty;
-(BOOL)requireSquareImages:(id)arg0 ;
-(id)_createModifiedImageFromSourceKey:(id)arg0 newImageKey:(id)arg1 modifier:(id)arg2 size:(struct CGSize )arg3 resizeOptions:(int)arg4 ;
-(id)_createScaledImageFromSourceKey:(id)arg0 newImageKey:(id)arg1 size:(struct CGSize )arg2 resizeOptions:(int)arg3 ;
-(id)_keyForSize:(struct CGSize )arg0 baseKey:(id)arg1 ;
-(id)_keyForSize:(struct CGSize )arg0 baseKey:(id)arg1 modifier:(id)arg2 ;
-(id)_loadDiskCacheImageForKey:(id)arg0 expectImageExists:(BOOL)arg1 ;
-(id)_performImagingTransactionNamed:(id)arg0 block:(id)arg1 ;
-(id)fullName;
-(id)imageForKey:(id)arg0 ;
-(id)imageForKey:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageForKey:(id)arg0 size:(struct CGSize )arg1 modifier:(id)arg2 ;
-(id)imageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 ;
-(id)imageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 modifier:(id)arg3 ;
-(id)imageInMemoryForKey:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageInMemoryForKey:(id)arg0 size:(struct CGSize )arg1 modifier:(id)arg2 ;
-(id)imageUrlForKey:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 basePath:(id)arg1 maxImageDimensionInPixels:(CGFloat)arg2 maxConcurrentOperations:(NSUInteger)arg3 alternativeSizeBlock:(id)arg4 ;
-(void)_addImage:(id)arg0 toMemoryCacheWithKey:(id)arg1 ;
-(void)addImage:(id)arg0 forKey:(id)arg1 ;
-(void)addImage:(id)arg0 forKey:(id)arg1 persist:(BOOL)arg2 ;
-(void)addImage:(id)arg0 forKey:(id)arg1 persist:(BOOL)arg2 discardTransparency:(BOOL)arg3 ;
-(void)addImagesWithSourceUrl:(id)arg0 forKeys:(id)arg1 removeOldItems:(BOOL)arg2 discardTransparency:(BOOL)arg3 completion:(id)arg4 ;
-(void)asyncImageForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)asyncImageForKey:(id)arg0 size:(struct CGSize )arg1 completionHandler:(id)arg2 ;
-(void)asyncImageForKey:(id)arg0 size:(struct CGSize )arg1 modifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)asyncImageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 completionHandler:(id)arg3 ;
-(void)asyncImageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 modifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)asyncImageForKey:(id)arg0 squareDimension:(CGFloat)arg1 cacheKeyModifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)asyncImageURLForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)asyncImageURLForKey:(id)arg0 squareDimension:(CGFloat)arg1 cacheKeyModifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearCache;
-(void)configureMemoryCache;
-(void)memoryWarning;
-(void)performWhenURLAvailableForImageForKey:(id)arg0 block:(id)arg1 ;
-(void)removeItemForKey:(id)arg0 ;
-(void)removeItemsWithPrefx:(id)arg0 ;


@end


#endif