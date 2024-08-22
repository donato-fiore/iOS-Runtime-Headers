// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPBITMAPSTORE_H
#define CPBITMAPSTORE_H

@class NSString, NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPBitmapStore : NSObject {
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
}


@property (nonatomic) NSUInteger cacheItemLimit;
@property (nonatomic) BOOL lockOnRead; // ivar: _lockOnRead
@property (readonly, nonatomic) int version;


-(*void)openAndMmap:(id)arg0 withInfo:(struct _img *)arg1 ;
-(BOOL)findImageWithKey:(id)arg0 inGroup:(id)arg1 andInfo:(struct _img *)arg2 ;
-(BOOL)saveImageWithKey:(id)arg0 inGroup:(id)arg1 andInfo:(struct _img *)arg2 ;
-(NSUInteger)imageCount;
-(id)allGroups;
-(id)cacheNumberForKey:(id)arg0 ;
-(id)imageNameForKey:(id)arg0 inGroup:(id)arg1 ;
-(id)imagePath;
-(id)initWithPath:(id)arg0 version:(int)arg1 ;
// -(struct CGImage *)_copyAndStoreImageForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 format:(unsigned char)arg3 scale:(CGFloat)arg4 fillMem:(id)arg5 alternateCompletion:(unk)arg6  ;
-(struct CGImage *)copyAndStoreImageForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 opaque:(BOOL)arg3 scale:(CGFloat)arg4 draw:(id)arg5 ;
-(struct CGImage *)copyImageForKey:(id)arg0 ;
-(struct CGImage *)copyImageForKey:(id)arg0 inGroup:(id)arg1 ;
-(unsigned int)memContentOffset;
-(void)commitTransaction;
-(void)commitTxn;
-(void)dealloc;
-(void)purge;
-(void)removeImagesInGroups:(id)arg0 ;
-(void)removeImagesInGroups:(id)arg0 completion:(id)arg1 ;
-(void)storeGrayscaleImageDataForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 opaque:(BOOL)arg3 scale:(CGFloat)arg4 data:(id)arg5 ;
-(void)storeImageDataForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 format:(unsigned char)arg3 formatColor:(struct CGColor *)arg4 scale:(CGFloat)arg5 data:(id)arg6 ;
-(void)storeImageDataForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 format:(unsigned char)arg3 scale:(CGFloat)arg4 data:(id)arg5 ;
-(void)storeImageDataForKey:(id)arg0 inGroup:(id)arg1 withSize:(struct CGSize )arg2 opaque:(BOOL)arg3 scale:(CGFloat)arg4 data:(id)arg5 ;
-(void)storeImageForKey:(id)arg0 inGroup:(id)arg1 opaque:(BOOL)arg2 image:(struct CGImage *)arg3 ;


@end


#endif