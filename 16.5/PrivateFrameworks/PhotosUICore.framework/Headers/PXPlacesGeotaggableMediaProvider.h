// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESGEOTAGGABLEMEDIAPROVIDER_H
#define PXPLACESGEOTAGGABLEMEDIAPROVIDER_H

@class NSString;
@protocol PXPlacesMapGeotaggableInfoDelegate;

#import <Foundation/Foundation.h>


@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fetchImageManagerAssetForPlacesAsset:(id)arg0 ;
-(void)_imageForGeotaggable:(id)arg0 ofSize:(struct CGSize )arg1 networkAccessAllowed:(BOOL)arg2 andCompletion:(id)arg3 ;
-(void)imageForGeotaggable:(id)arg0 ofSize:(struct CGSize )arg1 networkAccessAllowed:(BOOL)arg2 andCompletion:(id)arg3 ;


@end


#endif