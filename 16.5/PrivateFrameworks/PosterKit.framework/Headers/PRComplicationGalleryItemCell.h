// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYITEMCELL_H
#define PRCOMPLICATIONGALLERYITEMCELL_H

@class UICollectionViewCell;


#import "PRComplicationGalleryItemView.h"

@interface PRComplicationGalleryItemCell : UICollectionViewCell

@property (readonly, nonatomic) PRComplicationGalleryItemView *itemView; // ivar: _itemView


-(BOOL)_descendantsShouldHighlight;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif