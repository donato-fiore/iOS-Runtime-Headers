// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONLISTASSETCOLLECTIONITEM_H
#define PXNAVIGATIONLISTASSETCOLLECTIONITEM_H

@class PHAssetCollection;


#import "PXNavigationListDisplayAssetCollectionItem.h"

@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem

@property (readonly, nonatomic) PHAssetCollection *collection;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cpAnalyticsEventName;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg0 existingAssetsFetchResult:(id)arg1 ;


@end


#endif