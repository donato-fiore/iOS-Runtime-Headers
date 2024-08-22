// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUMUTABLEASSETEXPLORERREVIEWSCREENASSETSDATASOURCEMANAGERIMPLEMENTATION_H
#define PUMUTABLEASSETEXPLORERREVIEWSCREENASSETSDATASOURCEMANAGERIMPLEMENTATION_H

@class NSString, NSMutableDictionary;
@protocol PUMutableAssetExplorerReviewScreenAssetsDataSourceManager;

#import <Foundation/Foundation.h>


@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject <PUMutableAssetExplorerReviewScreenAssetsDataSourceManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *replacementAssetsByUUID; // ivar: _replacementAssetsByUUID
@property (readonly) Class superclass;


-(id)initWithReplacementAssetsByUUID:(id)arg0 ;
-(void)removeReplacementAssetInDataSourceForUUID:(id)arg0 ;
-(void)replaceAssetInDataSourceWithAsset:(id)arg0 ;


@end


#endif