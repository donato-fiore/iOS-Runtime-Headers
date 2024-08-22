// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCGAUXILIARYIMAGEPROPERTIES_H
#define NUCGAUXILIARYIMAGEPROPERTIES_H

@class NSDictionary, NSString, AVCameraCalibrationData;
@protocol NUAuxiliaryImageProperties, NUAuxiliaryImage;

#import <Foundation/Foundation.h>


@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties>

 {
    id *_imageSource;
}


@property (retain) NSDictionary *auxCoreGraphicsInfoDictionary; // ivar: _auxCoreGraphicsInfoDictionary
@property (retain) id *auxDataInfoMetadata; // ivar: _auxDataInfoMetadata
@property (retain) NSObject<NUAuxiliaryImage> *auxImage; // ivar: _auxImage
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier; // ivar: _auxiliaryImageTypeCGIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (retain) AVCameraCalibrationData *depthCamCalibrationData; // ivar: _depthCamCalibrationData
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? size; // ivar: _size
@property (readonly) Class superclass;


-(id)auxiliaryCoreGraphicsInfoDictionary:(*id)arg0 ;
-(id)auxiliaryImage:(*id)arg0 ;
-(id)depthCameraCalibrationData;
-(id)initWithCGProperties:(id)arg0 imageSource:(struct CGImageSource *)arg1 ;
-(struct CGImageMetadata *)auxiliaryDataInfoMetadata;


@end


#endif