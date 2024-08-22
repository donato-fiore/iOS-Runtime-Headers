// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUAUXILIARYIMAGERAWBUFFER_H
#define NUAUXILIARYIMAGERAWBUFFER_H

@class NSString;
@protocol NUAuxiliaryImage;

#import <Foundation/Foundation.h>


@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage>



@property (readonly) NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) *CGImageMetadata metadata; // ivar: _metadata
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) Class superclass;


-(id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg0 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationForAuxiliaryDataType:(*id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 auxiliaryImageType:(NSInteger)arg1 ;
-(struct CGImage *)cgImageRef;
-(struct __CVBuffer *)cvPixelBufferRef;
-(unsigned int)pixelFormatType;
-(void)dealloc;


@end


#endif