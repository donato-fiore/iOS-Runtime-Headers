// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSCOLLECTIONVIEWSECTIONCONTAINERGUIDEREGION_H
#define _UIFOCUSCOLLECTIONVIEWSECTIONCONTAINERGUIDEREGION_H

@class UIFocusContainerGuideRegion;


#import "UICollectionView.h"

@interface _UIFocusCollectionViewSectionContainerGuideRegion : UIFocusContainerGuideRegion

@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) NSInteger section; // ivar: _section
@property (nonatomic) CGRect sectionFrame; // ivar: _sectionFrame


-(id)_fallbackFocusItemForMovementRequest:(id)arg0 inFocusMap:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif