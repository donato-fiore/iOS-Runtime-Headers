// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIIMAGESCARDSECTIONVIEW_H
#define SEARCHUIIMAGESCARDSECTIONVIEW_H

@class TLKImagesView;


#import "SearchUICardSectionView.h"

@interface SearchUIImagesCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKImagesView *contentView;


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif