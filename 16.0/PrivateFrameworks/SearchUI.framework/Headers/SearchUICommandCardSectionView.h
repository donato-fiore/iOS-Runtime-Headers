// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMMANDCARDSECTIONVIEW_H
#define SEARCHUICOMMANDCARDSECTIONVIEW_H

@class TLKSimpleRowView;


#import "SearchUICardSectionView.h"
#import "SearchUIButton.h"

@interface SearchUICommandCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUIButton *button; // ivar: _button
@property (retain, nonatomic) TLKSimpleRowView *rowView; // ivar: _rowView


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif