// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCAMERATRANSIENTASSETSDATASOURCEMANAGER_H
#define PUCAMERATRANSIENTASSETSDATASOURCEMANAGER_H

@class NSString;
@protocol PUTransientDataSourceChangeObserver, PUDisplayAssetCollection, PUTransientDataSource;


#import "PUAssetsDataSourceManager.h"

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver>



@property (readonly, nonatomic) NSObject<PUDisplayAssetCollection> *_containingAssetCollection; // ivar: __containingAssetCollection
@property (readonly, nonatomic) NSObject<PUTransientDataSource> *_transientDataSource; // ivar: __transientDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithTransientDataSource:(id)arg0 ;
-(void)_updateWithTransientDataSource:(id)arg0 ;
-(void)transientDataSourceDidChange:(id)arg0 ;


@end


#endif