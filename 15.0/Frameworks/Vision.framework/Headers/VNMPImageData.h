// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMPIMAGEDATA_H
#define VNMPIMAGEDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VNMPImageData : NSObject

@property (readonly) NSInteger exifTimestamp; // ivar: _exifTimestamp
@property (readonly) NSString *externalImageId; // ivar: _externalImageId
@property BOOL freeImageInDealloc; // ivar: _freeImageInDealloc
@property (readonly) *vImage_Buffer image; // ivar: _image
@property (readonly) *__CVBuffer imageCVPixelBuffer; // ivar: _imageCVPixelBuffer
@property (retain) NSString *imageFilePath; // ivar: _imageFilePath


-(id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg0 externalImageId:(id)arg1 andExifTimestampString:(id)arg2 error:(*id)arg3 ;
-(id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg0 externalImageId:(id)arg1 andExifTimestampValue:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithVImage:(struct vImage_Buffer *)arg0 externalImageId:(id)arg1 andExifTimestampString:(id)arg2 error:(*id)arg3 ;
-(id)initWithVImage:(struct vImage_Buffer *)arg0 externalImageId:(id)arg1 andExifTimestampValue:(NSInteger)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif