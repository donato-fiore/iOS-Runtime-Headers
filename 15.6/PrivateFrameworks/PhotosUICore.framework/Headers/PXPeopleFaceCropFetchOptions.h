// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEFACECROPFETCHOPTIONS_H
#define PXPEOPLEFACECROPFETCHOPTIONS_H

@class PHAsset, PHFace, PHPerson, PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PXPeopleFaceCropFetchOptions : NSObject

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) CGSize clientTargetSize; // ivar: _clientTargetSize
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (nonatomic) NSInteger cropFactor; // ivar: _cropFactor
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) PHFace *face; // ivar: _face
@property (nonatomic) BOOL isSynchronous; // ivar: _isSynchronous
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL shouldCacheResult; // ivar: _shouldCacheResult
@property (readonly, nonatomic) CGSize targetPixelSize; // ivar: _targetPixelSize
@property (nonatomic) BOOL wantsSmallFaceRect; // ivar: _wantsSmallFaceRect


+(id)_cornerStyleStringForCornerStyle:(NSInteger)arg0 ;
+(id)_cropFactorStringForCropFactor:(NSInteger)arg0 ;
+(id)_deliveryModeStringForDeliveryMode:(NSInteger)arg0 ;
-(BOOL)areFetchParametersEqualtoFetchParametersOfOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFace:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
-(id)initWithPerson:(id)arg0 face:(id)arg1 targetSize:(struct CGSize )arg2 displayScale:(CGFloat)arg3 ;
-(id)initWithPerson:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
-(void)_commonInitWithPerson:(id)arg0 face:(id)arg1 targetSize:(struct CGSize )arg2 displayScale:(CGFloat)arg3 ;


@end


#endif