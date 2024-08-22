// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOVIEPROVIDER_H
#define PXMOVIEPROVIDER_H

@class PHAssetCollection, PHAsset, UIViewController;
@protocol PXMovieProviderDelegate;

#import <Foundation/Foundation.h>

#import "PXDiagnosticsItemProvider.h"

@interface PXMovieProvider : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) BOOL canPlayMovie;
@property (weak, nonatomic) NSObject<PXMovieProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property (readonly, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) UIViewController *movieViewController;


-(BOOL)ppt_runTest:(id)arg0 options:(id)arg1 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 ;


@end


#endif