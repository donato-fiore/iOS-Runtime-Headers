// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEEKDAYSELECTIONCOLLECTIONVIEWCELL_H
#define PKWEEKDAYSELECTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell;
@protocol PKWeekdaySelectorDelegate;


#import "PKWeekdaySelector.h"

@interface PKWeekdaySelectionCollectionViewCell : UICollectionViewListCell {
    PKWeekdaySelector *_weekdaySelector;
}


@property (weak, nonatomic) NSObject<PKWeekdaySelectorDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setSelectedDays:(id)arg0 possibleDays:(id)arg1 ;


@end


#endif