// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSSHARINGTRANSITIONCONTEXT_H
#define PUPHOTOSSHARINGTRANSITIONCONTEXT_H

@class NSIndexPath;
@protocol PHAssetCollectionDataSource;

#import <Foundation/Foundation.h>


@interface PUPhotosSharingTransitionContext : NSObject

@property (retain, nonatomic) NSObject<PHAssetCollectionDataSource> *assetCollectionsDataSource; // ivar: _assetCollectionsDataSource
@property (retain, nonatomic) NSIndexPath *keyAssetIndexPath; // ivar: _keyAssetIndexPath




@end


#endif