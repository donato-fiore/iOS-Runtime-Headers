// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXPHOTOSVIEWPLACESMOMENTSDATASOURCEPROVIDER_H
#define _PXPHOTOSVIEWPLACESMOMENTSDATASOURCEPROVIDER_H

@class PHPhotoLibrary, NSString;
@protocol PXPhotosDataSourceProvider, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface _PXPhotosViewPlacesMomentsDataSourceProvider : NSObject <PXPhotosDataSourceProvider>

 {
    id<NSFastEnumeration> *_assets;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg0 ;
-(id)initWithAllowedAssets:(id)arg0 photoLibrary:(id)arg1 ;
-(id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg0 ;


@end


#endif