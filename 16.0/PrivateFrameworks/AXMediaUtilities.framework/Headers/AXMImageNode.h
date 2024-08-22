// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMIMAGENODE_H
#define AXMIMAGENODE_H



#import "AXMSourceNode.h"

@interface AXMImageNode : AXMSourceNode



+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)produceImage:(id)arg0 ;
-(void)triggerWithImage:(id)arg0 options:(id)arg1 cacheKey:(id)arg2 resultHandler:(id)arg3 ;
-(void)triggerWithImageAssetLocalIdentifier:(id)arg0 photoLibraryURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id)arg4 ;
-(void)triggerWithImageURL:(id)arg0 assetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(id)arg5 ;
-(void)triggerWithImageURL:(id)arg0 options:(id)arg1 cacheKey:(id)arg2 resultHandler:(id)arg3 ;
-(void)triggerWithPixelBuffer:(struct __CVBuffer *)arg0 exifOrientation:(unsigned int)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id)arg4 ;


@end


#endif