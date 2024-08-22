// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHSUGGESTIONSLISTCOLLECTIONVIEWCELL_H
#define _UISEARCHSUGGESTIONSLISTCOLLECTIONVIEWCELL_H

@protocol _UISearchSuggestion_dci;


#import "UICollectionViewListCell.h"

@interface _UISearchSuggestionsListCollectionViewCell : UICollectionViewListCell

@property (weak, nonatomic) NSObject<_UISearchSuggestion_dci> *representedSuggestion; // ivar: _representedSuggestion


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif