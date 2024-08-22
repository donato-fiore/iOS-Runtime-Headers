// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTCOLLECTIONLISTITEM_H
#define PXNAVIGATIONLISTCOLLECTIONLISTITEM_H

@class PHCollectionList;


#import "PXNavigationListDisplayCollectionListItem.h"

@interface PXNavigationListCollectionListItem : PXNavigationListDisplayCollectionListItem

@property (readonly, nonatomic) PHCollectionList *collection;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cpAnalyticsEventName;
-(id)initWithCollectionList:(id)arg0 itemCount:(NSInteger)arg1 ;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg0 existingAssetsFetchResult:(id)arg1 ;


@end


#endif