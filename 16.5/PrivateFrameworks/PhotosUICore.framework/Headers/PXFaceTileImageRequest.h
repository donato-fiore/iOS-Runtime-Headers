// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFACETILEIMAGEREQUEST_H
#define PXFACETILEIMAGEREQUEST_H

@class PHAsset, NSString, PHFace, PHObject, NSDate;

#import <Foundation/Foundation.h>


@interface PXFaceTileImageRequest : NSObject

@property (retain, nonatomic) PHAsset *assetContainingFace; // ivar: _assetContainingFace
@property (readonly, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) PHFace *face; // ivar: _face
@property BOOL fullResMissing; // ivar: _fullResMissing
@property int imageManagerRequestID; // ivar: _imageManagerRequestID
@property (nonatomic) CGSize lastDeliveredSize; // ivar: _lastDeliveredSize
@property (nonatomic) CGRect normalizedActualFaceRect; // ivar: _normalizedActualFaceRect
@property (nonatomic) CGRect normalizedFaceCropRect; // ivar: _normalizedFaceCropRect
@property (retain, nonatomic) PHObject *originalRequestObject; // ivar: _originalRequestObject
@property (readonly, nonatomic) PXFaceTileImageParams params; // ivar: _params
@property (copy, nonatomic) NSDate *ppt_requestStartDate; // ivar: _ppt_requestStartDate
@property (readonly, nonatomic) int requestID; // ivar: _requestID


-(id)initWithFace:(id)arg0 cacheKey:(id)arg1 params:(struct PXFaceTileImageParams )arg2 ;
-(void)cancel;
-(void)ppt_reportMeasurementsForImageQuality:(NSInteger)arg0 ;


@end


#endif