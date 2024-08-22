// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGETABLEUPDATEHISTORYSECTION_H
#define SKUIPRODUCTPAGETABLEUPDATEHISTORYSECTION_H

@class NSMutableIndexSet, NSDateFormatter, NSArray;


#import "SKUIProductPageTableSection.h"
#import "SKUIClientContext.h"
#import "SKUIProductPageTableExpandableHeaderView.h"
#import "SKUIColorScheme.h"
#import "SKUILayoutCache.h"

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSDateFormatter *_dateFormatter;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) NSInteger firstStringIndex; // ivar: _firstStringIndex
@property (copy, nonatomic) NSArray *releaseNotes; // ivar: _releaseNotes
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache; // ivar: _textLayoutCache


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)headerViewForTableView:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(id)selectionActionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)_reloadHeaderView;
-(void)setExpanded:(BOOL)arg0 ;


@end


#endif