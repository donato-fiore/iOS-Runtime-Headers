// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOMMANDCARDSECTIONVIEW_H
#define SEARCHUICOMMANDCARDSECTIONVIEW_H

@class UIView, TLKSimpleRowView;


#import "SearchUICardSectionView.h"

@interface SearchUICommandCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) UIView *checkmarkImageView; // ivar: _checkmarkImageView
@property (retain, nonatomic) TLKSimpleRowView *rowView; // ivar: _rowView


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)fetchStateForNewRowModel:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif