// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSTOREFRONTCAMERA_H
#define GEOSTOREFRONTCAMERA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOStorefrontCamera : NSObject

@property (readonly, nonatomic) int cameraNumber; // ivar: _cameraNumber
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) unsigned char lensType; // ivar: _lensType
@property (readonly, nonatomic) GEOOrientedPosition position; // ivar: _position
@property (readonly, nonatomic) GEOLensModel projection; // ivar: _projection
@property (readonly, nonatomic) NSArray *textureIds; // ivar: _textureIds


-(id)init;
-(id)initWithCameraMetadata:(id)arg0 ;


@end


#endif