// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTIMAGESTORE_H
#define MTIMAGESTORE_H

@protocol MTImageStoreProtocol;


#import "IMImageStore.h"

@interface MTImageStore : IMImageStore <MTImageStoreProtocol>





+(CGFloat)defaultMaxImageDimensionInPixels;
+(NSUInteger)defaultMaxConcurrentOperations;
+(id)defaultBasePath;
+(id)defaultPodcastArtworkWithWidth:(CGFloat)arg0 ;
+(id)defaultStore;
-(BOOL)requireSquareImages:(id)arg0 ;
-(id)imageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 modifier:(id)arg3 ;
-(id)initWithName:(id)arg0 basePath:(id)arg1 maxImageDimensionInPixels:(CGFloat)arg2 maxConcurrentOperations:(NSUInteger)arg3 alternativeSizeBlock:(id)arg4 ;
-(void)addImage:(id)arg0 forKey:(id)arg1 ;
-(void)asyncImageForKey:(id)arg0 size:(struct CGSize )arg1 resizeOptions:(int)arg2 modifier:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif