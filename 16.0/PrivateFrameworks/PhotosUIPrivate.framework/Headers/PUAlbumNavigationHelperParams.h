// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMNAVIGATIONHELPERPARAMS_H
#define PUALBUMNAVIGATIONHELPERPARAMS_H

@class PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;
@protocol PXGridPresentation;

#import <Foundation/Foundation.h>

#import "PUSessionInfo.h"
#import "PUAlbumListViewControllerSpec.h"

@interface PUAlbumNavigationHelperParams : NSObject

@property (readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) NSObject<PXGridPresentation> *gridPresentation; // ivar: _gridPresentation
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (retain, nonatomic) PUAlbumListViewControllerSpec *spec; // ivar: _spec




@end


#endif