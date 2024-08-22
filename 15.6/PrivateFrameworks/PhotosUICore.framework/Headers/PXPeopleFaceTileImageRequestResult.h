// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEFACETILEIMAGEREQUESTRESULT_H
#define PXPEOPLEFACETILEIMAGEREQUESTRESULT_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface PXPeopleFaceTileImageRequestResult : NSObject

@property (retain, nonatomic) id *assetObjectID; // ivar: _assetObjectID
@property (readonly, nonatomic) CGRect faceRect; // ivar: _faceRect
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isDegraded; // ivar: _isDegraded
@property (nonatomic) BOOL isVeryLowQuality; // ivar: _isVeryLowQuality
@property (nonatomic) CGSize originalImageSize; // ivar: _originalImageSize
@property (retain, nonatomic) id *originalObjectID; // ivar: _originalObjectID
@property (nonatomic) PXFaceTileImageParams params; // ivar: _params


-(id)description;
-(id)initWithImage:(id)arg0 faceRect:(struct CGRect )arg1 isDegraded:(BOOL)arg2 ;


@end


#endif