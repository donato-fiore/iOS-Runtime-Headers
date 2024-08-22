// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEFACECROPREQUEST_H
#define PXPEOPLEFACECROPREQUEST_H

@class PHAsset, PHFace;

#import <Foundation/Foundation.h>

#import "PXPeopleFaceCropFetchOptions.h"

@interface PXPeopleFaceCropRequest : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) PHFace *face; // ivar: _face
@property (readonly, nonatomic) int faceCropRequestID; // ivar: _faceCropRequestID
@property (nonatomic) int imageManagerRequestID; // ivar: _imageManagerRequestID
@property (nonatomic) CGPoint normalizedCenterEyeLine; // ivar: _normalizedCenterEyeLine
@property (nonatomic) CGRect normalizedEdgeAdjustedCropRect; // ivar: _normalizedEdgeAdjustedCropRect
@property (nonatomic) CGRect normalizedFaceCropRect; // ivar: _normalizedFaceCropRect
@property (nonatomic) CGRect normalizedSmallFaceRect; // ivar: _normalizedSmallFaceRect
@property (readonly, nonatomic) PXPeopleFaceCropFetchOptions *options; // ivar: _options
@property (nonatomic) CGRect smallFaceRect; // ivar: _smallFaceRect


+(int)_generateUniqueRequestID;
-(id)description;
-(id)initWithFetchOptions:(id)arg0 ;
-(void)cancel;


@end


#endif