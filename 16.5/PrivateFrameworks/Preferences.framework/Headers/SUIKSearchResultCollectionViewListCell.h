// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUIKSEARCHRESULTCOLLECTIONVIEWLISTCELL_H
#define SUIKSEARCHRESULTCOLLECTIONVIEWLISTCELL_H

@class UICollectionViewListCell, CSSearchableItem;



@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell

@property (retain, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem


+(id)reuseIdentifier;
-(void)configureWithSearchableItem:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif