// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIACTIVITYINDICATORCARDSECTIONVIEW_H
#define SEARCHUIACTIVITYINDICATORCARDSECTIONVIEW_H

@class TLKActivityIndicatorView;


#import "SearchUICardSectionView.h"

@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKActivityIndicatorView *contentView;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif