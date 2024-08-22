// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIKEYVALUEDATACARDSECTIONVIEW_H
#define SEARCHUIKEYVALUEDATACARDSECTIONVIEW_H

@class TLKKeyValueView;


#import "SearchUICardSectionView.h"

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKKeyValueView *contentView;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)convertSFKeyValueData:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif