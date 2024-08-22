// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUALBUMLISTTRANSITIONCONTEXT_H
#define PUALBUMLISTTRANSITIONCONTEXT_H

@class NSIndexPath, PHCollection, UICollectionViewTransitionLayout;
@protocol PLAssetContainer;

#import <Foundation/Foundation.h>

#import "PUPhotoDecoration.h"

@interface PUAlbumListTransitionContext : NSObject

@property (retain, nonatomic) NSObject<PLAssetContainer> *collection; // ivar: _collection
@property (retain, nonatomic) NSIndexPath *keyItemIndexPath; // ivar: _keyItemIndexPath
@property (retain, nonatomic) PHCollection *phCollection; // ivar: _phCollection
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration; // ivar: _photoDecoration
@property (retain, nonatomic) UICollectionViewTransitionLayout *transitionLayout; // ivar: _transitionLayout
@property (nonatomic) BOOL usesContentOffsetAutoAdjust; // ivar: _usesContentOffsetAutoAdjust




@end


#endif