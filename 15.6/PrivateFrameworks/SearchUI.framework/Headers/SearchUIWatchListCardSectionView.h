// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIWATCHLISTCARDSECTIONVIEW_H
#define SEARCHUIWATCHLISTCARDSECTIONVIEW_H

@class NUIContainerStackView, TLKSimpleRowView;
@protocol SearchUIWatchListCardRowModelDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIButton.h"
#import "SearchUIWatchListCardRowModel.h"

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>



@property (retain, nonatomic) SearchUIButton *button; // ivar: _button
@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIWatchListCardRowModel *rowModel;
@property (retain, nonatomic) TLKSimpleRowView *rowView; // ivar: _rowView


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)didUpdateRowModel:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateText:(id)arg0 image:(id)arg1 buttonState:(NSInteger)arg2 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif