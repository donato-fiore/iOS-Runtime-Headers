// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUAUXILIARYIMAGEAVDEPTHDATA_H
#define NUAUXILIARYIMAGEAVDEPTHDATA_H

@class AVDepthData, NSString;
@protocol NUAuxiliaryImage;

#import <Foundation/Foundation.h>


@interface NUAuxiliaryImageAVDepthData : NSObject <NUAuxiliaryImage>



@property (readonly) NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType
@property (readonly) AVDepthData *avDepthData; // ivar: _avDepthData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg0 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationForAuxiliaryDataType:(*id)arg0 ;
-(id)initAuxiliaryImageFromAVDepthData:(id)arg0 ;
-(id)underlyingAVDepthData;
-(struct CGImage *)cgImageRef;
-(struct __CVBuffer *)cvPixelBufferRef;
-(unsigned int)pixelFormatType;


@end


#endif