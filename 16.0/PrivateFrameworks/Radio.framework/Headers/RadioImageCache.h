// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIOIMAGECACHE_H
#define RADIOIMAGECACHE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface RadioImageCache : NSObject {
    NSOperationQueue *_imageRequestQueue;
}




+(id)sharedCache;
+(struct _CFURLCache *)_sharedCFURLCache;
+(struct __CFURLStorageSession *)_newSharedCacheStorageSession;
-(id)_cachedResponseForRequest:(id)arg0 ;
-(id)_init;
-(id)_requestForRadioArtwork:(id)arg0 ;
-(id)cachedImageDataForRadioArtwork:(id)arg0 MIMEType:(*id)arg1 ;
-(id)cachedImageDataForStation:(id)arg0 withExactSize:(struct CGSize )arg1 MIMEType:(*id)arg2 ;
-(id)init;
-(void)_removeAllCachedImages;
-(void)dealloc;
-(void)loadImageForRadioArtwork:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadImageForStation:(id)arg0 withSize:(struct CGSize )arg1 completionHandler:(id)arg2 ;


@end


#endif