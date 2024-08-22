// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEFACECROPFETCHRESULT_H
#define PXPEOPLEFACECROPFETCHRESULT_H

@class NSManagedObjectID, UIImage;

#import <Foundation/Foundation.h>

#import "PXPeopleFaceCropFetchOptions.h"

@interface PXPeopleFaceCropFetchResult : NSObject

@property (readonly, nonatomic) NSManagedObjectID *assetObjectID; // ivar: _assetObjectID
@property (readonly, nonatomic) CGRect faceRect; // ivar: _faceRect
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isCropped; // ivar: _isCropped
@property (readonly, nonatomic) BOOL isDegraded; // ivar: _isDegraded
@property (readonly, nonatomic) PXPeopleFaceCropFetchOptions *options; // ivar: _options


-(id)description;
-(id)initWithImage:(id)arg0 assetObjectID:(id)arg1 faceRect:(struct CGRect )arg2 isCropped:(BOOL)arg3 isDegraded:(BOOL)arg4 options:(id)arg5 ;


@end


#endif