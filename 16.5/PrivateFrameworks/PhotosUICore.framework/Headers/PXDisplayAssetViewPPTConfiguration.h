// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETVIEWPPTCONFIGURATION_H
#define PXDISPLAYASSETVIEWPPTCONFIGURATION_H

@class NSString;
@protocol PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXDisplayAssetViewPPTConfiguration : NSObject

@property (readonly, nonatomic) id *assetViewFactory; // ivar: _assetViewFactory
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *assets; // ivar: _assets
@property (readonly, nonatomic) NSString *label; // ivar: _label


+(id)defaultConfigurations;
+(id)defaultPhotoLibrary;
-(id)init;
// -(id)initWithAssetViewFactory:(id)arg0 label:(unk)arg1 assets:(id)arg2 label:(id)arg3  ;
// -(id)initWithAssetViewFactory:(id)arg0 label:(unk)arg1 photoLibraryAssetsWithPlaybackStyleFilter:(id)arg2  ;


@end


#endif