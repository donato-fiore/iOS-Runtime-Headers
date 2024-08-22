// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATESELECTORCOLLECTIONVIEWCELL_H
#define PKDATESELECTORCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UIDatePicker, NSDate;
@protocol PKDateSelectorCollectionViewCellDelegate;



@interface PKDateSelectorCollectionViewCell : UICollectionViewListCell {
    UIDatePicker *_datePicker;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NSObject<PKDateSelectorCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *minimumDate;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didUpdateDate:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif