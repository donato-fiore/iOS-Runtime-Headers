// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIWATCHLISTCARDSECTIONVIEW_H
#define SEARCHUIWATCHLISTCARDSECTIONVIEW_H

@class TLKSimpleRowView;
@protocol SearchUIWatchListCardRowModelDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIWatchListCardRowModel.h"

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>



@property (retain, nonatomic) TLKSimpleRowView *contentView;
@property (retain, nonatomic) SearchUIWatchListCardRowModel *rowModel;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)didUpdateRowModel:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif