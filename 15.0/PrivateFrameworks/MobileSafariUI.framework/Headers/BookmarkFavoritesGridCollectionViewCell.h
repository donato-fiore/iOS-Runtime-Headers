// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITESGRIDCOLLECTIONVIEWCELL_H
#define BOOKMARKFAVORITESGRIDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "BookmarkFavoriteView.h"

@interface BookmarkFavoritesGridCollectionViewCell : UICollectionViewCell {
    BookmarkFavoriteView *_bookmarkFavoriteView;
    id *_updateOnLayout;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif