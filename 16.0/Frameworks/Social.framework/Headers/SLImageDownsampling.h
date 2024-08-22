// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLIMAGEDOWNSAMPLING_H
#define SLIMAGEDOWNSAMPLING_H


#import <Foundation/Foundation.h>


@interface SLImageDownsampling : NSObject



+(id)createThumbnailWithData:(id)arg0 adjustSmallestSideToSize:(NSUInteger)arg1 ;
+(id)downsampleImageData:(id)arg0 toMaxByteSize:(NSUInteger)arg1 ;
+(struct ? )imageSizeWithData:(id)arg0 ;
+(void)downsampleImageData:(id)arg0 toMaxByteSize:(NSUInteger)arg1 resultsHandler:(id)arg2 ;
+(void)generateThumbnailFromImageData:(id)arg0 adjustSmallestSideToSize:(NSUInteger)arg1 resultsHandler:(id)arg2 ;


@end


#endif