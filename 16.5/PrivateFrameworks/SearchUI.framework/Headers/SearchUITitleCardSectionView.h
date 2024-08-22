// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITITLECARDSECTIONVIEW_H
#define SEARCHUITITLECARDSECTIONVIEW_H

@class NUIContainerBoxView, TLKLabel;


#import "SearchUICardSectionView.h"

@interface SearchUITitleCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerBoxView *containerView; // ivar: _containerView
@property (retain, nonatomic) TLKLabel *label; // ivar: _label


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif