// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDPHOTOSERVICESUTILITIES_H
#define CLOUDPHOTOSERVICESUTILITIES_H


#import <Foundation/Foundation.h>


@interface CloudPhotoServicesUtilities : NSObject



+(struct CGImageSource *)newImageSourceFromImageAtURL:(id)arg0 ;
+(struct CGSize )dimensionsForAVAsset:(id)arg0 ;
+(struct CGSize )sizeOfImageAtURL:(id)arg0 orientationOut:(*int)arg1 ;
+(void)getDimensionsFromImageProperties:(id)arg0 orientationOut:(*int)arg1 widthOut:(*int)arg2 heightOut:(*int)arg3 ;


@end


#endif