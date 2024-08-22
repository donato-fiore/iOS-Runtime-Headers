// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMBINEDCOLLECTIONVIEWCELL_H
#define SEARCHUICOMBINEDCOLLECTIONVIEWCELL_H



#import "SearchUICollectionViewCell.h"
#import "SearchUICombinedCardSectionsView.h"

@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUICombinedCardSectionsView *cardSectionView; // ivar: _cardSectionView


-(id)sizingView;
-(void)setDelegate:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif