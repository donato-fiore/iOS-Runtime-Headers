// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PLPLACEHOLDERTHUMBNAILCACHEDDATA_H
#define _PLPLACEHOLDERTHUMBNAILCACHEDDATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _PLPlaceholderThumbnailCachedData : NSObject {
    NSData *_imageData;
    int _width;
    int _height;
    int _bytesPerRow;
    int _dataWidth;
    int _dataHeight;
    int _imageDataOffset;
}




-(id)imageDataWithWidth:(*int)arg0 height:(*int)arg1 bytesPerRow:(*int)arg2 dataWidth:(*int)arg3 dataHeight:(*int)arg4 imageDataOffset:(*int)arg5 ;
-(id)initWithImageData:(id)arg0 width:(int)arg1 height:(int)arg2 bytesPerRow:(int)arg3 dataWidth:(int)arg4 dataHeight:(int)arg5 imageDataOffset:(int)arg6 ;


@end


#endif