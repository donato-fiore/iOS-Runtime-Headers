// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONITEM_H
#define PXCONTENTSYNDICATIONITEM_H

@protocol NSCopying, PXDisplayAssetCollection;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionActionManager.h"

@interface PXContentSyndicationItem : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetCollection:(id)arg0 ;


@end


#endif