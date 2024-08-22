// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSCOLLECTIONVIEWSECTIONCONTAINERGUIDE_H
#define _UIFOCUSCOLLECTIONVIEWSECTIONCONTAINERGUIDE_H



#import "UIFocusContainerGuide.h"
#import "UICollectionView.h"

@interface _UIFocusCollectionViewSectionContainerGuide : UIFocusContainerGuide

@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) NSInteger section; // ivar: _section


-(id)initWithCollectionView:(id)arg0 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;


@end


#endif