// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTHEADERVIEW_H
#define CNCONTACTLISTHEADERVIEW_H

@class UICollectionViewListCell, UIView;



@interface CNContactListHeaderView : UICollectionViewListCell

@property (retain, nonatomic) UIView *headerView; // ivar: _headerView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif