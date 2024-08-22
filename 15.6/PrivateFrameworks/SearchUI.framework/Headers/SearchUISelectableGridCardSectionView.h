// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISELECTABLEGRIDCARDSECTIONVIEW_H
#define SEARCHUISELECTABLEGRIDCARDSECTIONVIEW_H

@class TLKSelectableGridView, NSString;
@protocol TLKSelectableGridViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>



@property (retain, nonatomic) TLKSelectableGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)convertSFTitleSubtitleData:(id)arg0 ;
-(id)setupContentView;
-(void)selectableGridView:(id)arg0 didChangeSelectedIndex:(NSInteger)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif